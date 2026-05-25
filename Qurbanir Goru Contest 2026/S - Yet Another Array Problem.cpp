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
        vector<ll> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a.begin(), a.end());
        ll result = INT_MAX;
        for (ll j = 0; j < n; j++)
        {
            for (ll i = 2; i < 200; i++)
            {
                if (gcd(a[j], i) == 1)
                {
                    if (i < result)
                    {
                        // cout << i << endl;
                        result = i;
                        break;
                    }
                }
            }
        }
        cout << result << endl;
    }

    return 0;
}