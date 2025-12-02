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
        ll n, m;
        cin >> n >> m;

        ll l = 1, r = 1e18, ans = 0LL;
        while (l <= r)
        {
            ll mid = (l + r) / 2;
            if (mid - (mid / n) >= m)
                r = mid - 1, ans = mid;
            else
                l = mid + 1;
        }
        cout << ans << endl;
    }

    return 0;
}