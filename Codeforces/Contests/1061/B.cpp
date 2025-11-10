#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

ll calc(ll x, char machine)
{
    if (machine == 'A')
        return x - 1;
    return x / 2;
}

ll step(ll x, char c) { return c == 'A' ? x - 1 : x / 2; }

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;

    while (tt--)
    {
        ll n, q;
        cin >> n >> q;
        string s;
        cin >> s;
        vector<ll> queries(q);
        for (ll &x : queries)
            cin >> x;

        bool hasB = (s.find('B') != string::npos);

        if (!hasB)
        {
            for (ll x : queries)
                cout << x << "\n";
            continue;
        }

        for (ll x : queries)
        {
            ll steps = 0;
            int i = 0;
            while (x > 0)
            {
                x = step(x, s[i]);
                i++;
                if (i == n)
                    i = 0;
                steps++;
            }
            cout << steps << "\n";
        }
    }

    return 0;
}