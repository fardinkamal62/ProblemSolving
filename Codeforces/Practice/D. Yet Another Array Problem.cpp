#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
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
                // cout << "GCD of " << a[j] << " and " << i << " is " << gcd(a[j], i) << endl;
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