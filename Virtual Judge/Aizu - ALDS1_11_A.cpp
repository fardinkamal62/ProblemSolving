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

    vector<vector<ll>> g(n + 1, vector<ll>(n + 1, 0));
    for (int t = 0; t < n; t++)
    {
        ll u, k;
        cin >> u >> k;

        for (int i = 0; i < k; i++)
        {
            ll v;
            cin >> v;
            g[u][v] = 1;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j > 1)
                cout << " ";
            cout << g[i][j];
        }
        cout << endl;
    }

    return 0;
}