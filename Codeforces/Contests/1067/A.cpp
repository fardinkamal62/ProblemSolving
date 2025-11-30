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
        ll n, y, r;
        cin >> n >> y >> r;

        ll ans = 0;
        ans += y / 2;
        ans += r;
        ans = min(ans, n);
        cout << ans << endl;
    }

    return 0;
}