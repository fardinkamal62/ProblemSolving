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
        ll n, i;
        cin >> n;

        vector<ll> a(n + 1);
        for (i = 1; i <= n; i++)
            cin >> a[i];

        a[0] = 0;
        int ans = 0;
        for (i = 1; i <= n; i++)
        {
            if (a[i - 1] == 0 && a[i] != 0)
                ans++;
        }

        if (ans > 2)
            ans = 2;

        cout << ans << endl;
    }

    return 0;
}