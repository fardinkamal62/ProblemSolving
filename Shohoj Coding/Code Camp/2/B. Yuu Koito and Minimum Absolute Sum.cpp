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

        vector<ll> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        ll a_zero = a[0];
        ll a_n = a[n - 1];
        ll ans = 0;

        if (a_zero != -1 && a_n != -1)
            ans = llabs(a_n - a_zero);

        else if (a_zero != -1 && a_n == -1)
        {
            a_n = a_zero;
            a[n - 1] = a_n;
            ans = 0;
        }
        else if (a_zero == -1 && a_n != -1)
        {
            a_zero = a_n;
            a[0] = a_zero;
            ans = 0;
        }
        else
        {
            a_zero = 0;
            a_n = 0;
            a[0] = 0;
            a[n - 1] = 0;
            ans = 0;
        }

        for (int i = 1; i < n - 1; i++)
        {
            if (a[i] == -1)
                a[i] = 0;
        }

        cout << ans << endl;
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}