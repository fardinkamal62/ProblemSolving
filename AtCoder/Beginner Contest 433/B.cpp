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

    ll n;
    cin >> n;

    vector<ll> heights(n);
    for (int i = 0; i < n; i++)
    {
        cin >> heights[i];
    }

    for (int i = 0; i < n; i++)
    {
        ll closest_person = -1;
        
        for (int j = i - 1; j >= 0; j--)
        {
            if (heights[j] > heights[i])
            {
                closest_person = j + 1;
                break;
            }
        }
        
        cout << closest_person << endl;
    }

    return 0;
}