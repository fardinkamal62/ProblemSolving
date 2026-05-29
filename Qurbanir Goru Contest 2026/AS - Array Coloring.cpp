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

        ll cnt = 0;

        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if (x % 2 != 0)
                cnt++;
        }

        if (cnt % 2 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}