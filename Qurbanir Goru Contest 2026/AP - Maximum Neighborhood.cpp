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

    ll tt;
    cin >> tt;

    while (tt--)
    {
        ll n;
        cin >> n;

        vector<vector<ll>> a(n, vector<ll>(n));

        ll curr = 1;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < n; j++)
                a[i][j] = curr, curr++;
        }

        ll max_neighborhood = 0;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                ll neighborhood_sum = a[i][j];

                if (i > 0)
                    neighborhood_sum += a[i - 1][j];
                if (i < n - 1)
                    neighborhood_sum += a[i + 1][j];
                if (j > 0)
                    neighborhood_sum += a[i][j - 1];
                if (j < n - 1)
                    neighborhood_sum += a[i][j + 1];

                max_neighborhood = max(max_neighborhood, neighborhood_sum);
            }
        }

        cout << max_neighborhood << endl;
    }
    return 0;
}