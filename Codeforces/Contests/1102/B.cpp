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
        ll r = n % 12;

        if (r <= 9)
        {
            cout << r << " " << n - r << endl;
        }
        else if (r == 10)
        {
            if (n >= 22)
                cout << 22 << " " << n - 22 << endl;
            else
                cout << -1 << endl;
        }
        else
        {
            cout << 11 << " " << n - 11 << endl;
        }
    }

    return 0;
}