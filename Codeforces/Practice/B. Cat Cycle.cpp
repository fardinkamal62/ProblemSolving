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
        ll n, k;
        cin >> n >> k;
        k--;

        ll div = n / 2;

        cout << (k + (n % 2) * k / div) % n + 1 << endl;
    }

    return 0;
}