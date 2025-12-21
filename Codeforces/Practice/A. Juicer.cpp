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

    ll n, b, d, empty = 0, quantity = 0;
    cin >> n >> b >> d;

    for (ll i = 0; i < n; i++)
    {
        ll orange;
        cin >> orange;

        if (orange > b)
            continue;
        if (quantity + orange > d)
        {
            empty++;
            quantity = 0;
        }
        else
            quantity += orange;
    }
    cout << empty << endl;

    return 0;
}