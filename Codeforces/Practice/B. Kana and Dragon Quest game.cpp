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
        ll x, n, m;
        cin >> x >> n >> m;

        while (x > 0 && n && x / 2 + 10 < x)
        {
            n--;
            x = x / 2 + 10;
        }
        if (x <= m * 10)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}