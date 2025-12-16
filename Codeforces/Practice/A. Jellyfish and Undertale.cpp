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
        ll a, b, n, result = 0;
        cin >> a >> b >> n;

        result = b;

        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            result += min(a - 1, x);
        }
        cout << result << endl;
    }

    return 0;
}