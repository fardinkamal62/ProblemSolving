#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, m;
    cin >> n >> m;

    ll twos = n / 2;
    ll ones = n % 2;

    ll total = twos + ones;
    if (total % m == 0)
    {
        cout << total << endl;
        return 0;
    }

    for (int i = 0; i < twos; i++)
    {
        total += 1;
        if (total % m == 0)
        {
            cout << total << endl;
            return 0;
        }
    }
    cout << -1 << endl;

    return 0;
}