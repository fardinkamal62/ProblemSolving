#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main()
{
    fastIO();

    ll h, w, n;
    cin >> h >> w >> n;

    vector<vector<ll>> grid(h, vector<ll>(w));

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cin >> grid[i][j];
        }
    }

    set<ll> queries;

    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >>  x;
        queries.insert(x);
    }

    ll maximum = 0;
    for (int i = 0; i < h; i++)
    {
        ll contains = 0;
        for (int j = 0; j < w; j++)
        {
            if (queries.find(grid[i][j]) != queries.end())
            {
                contains++;
            }
        }
        
        maximum = max(maximum, contains);
    }

    cout << maximum << endl;
    
    return 0;
}