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

        ll s = 0;
        ll minimum_value = LLONG_MAX;

        for (int i = 1; i <= n; i++)
        {
            ll a;
            cin >> a;

            s += a;
            ll val = s / i;
            minimum_value = min(minimum_value, val);

            cout << minimum_value;
            if (i < n)
                cout << ' ';
        }
        cout << endl;
    }

    return 0;
}