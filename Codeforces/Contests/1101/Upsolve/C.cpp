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

ll eval(const string &u, int n, ll x, ll s, int m)
{
    ll tables = 0, ans = 0;
    for (char c : u)
    {
        if (c == 'I')
        {
            if (tables < x)
            {
                tables++;
                ans++;
            }
        }
        else if (c == 'E')
        {
            if (ans < tables * s)
                ans++;
        }
        else
        {
            if (m-- > 0)
            {
                if (tables < x)
                {
                    tables++;
                    ans++;
                }
            }
            else
            {
                if (ans < tables * s)
                    ans++;
            }
        }
    }
    return ans;
}

int main()
{
    fastIO();

    int tt;
    cin >> tt;

    while (tt--)
    {
        int n;
        ll x, s;
        cin >> n >> x >> s;
        string u;
        cin >> u;

        int cntA = count(u.begin(), u.end(), 'A');

        ll ans = 0;
        for (int m = 0; m <= cntA; m++)
            ans = max(ans, eval(u, n, x, s, m));

        cout << ans << endl;
    }

    return 0;
}
