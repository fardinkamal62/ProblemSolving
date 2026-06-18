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
        ll a, b;
        cin >> a >> b;

        if (b % a == 0)
        {
            cout << (b * b) / a << endl;
        }
        else
        {
            cout << lcm(a, b) << endl;
        }
    }

    return 0;
}