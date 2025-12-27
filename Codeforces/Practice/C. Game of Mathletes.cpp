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
        ll n, k, i, x, ans = 0;
        cin >> n >> k;

        map<ll, ll> m;
        
        for (i = 0; i < n; i++)
        {
            cin >> x;
            if (m[k - x])
            {
                m[k - x]--;
                ans++;
            }
            else
            {
                m[x]++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}