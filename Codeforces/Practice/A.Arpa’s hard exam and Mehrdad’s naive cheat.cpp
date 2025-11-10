#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // ll tt;
    // cin >> tt;
    // while (tt--)
    // {

    ll n;
    cin >> n;

    if (n == 0)
    {
        cout << 1 << endl;
        return 0;
    }

    switch (n % 4)
    {
    case 0:
        cout << 6 << endl;
        break;
    case 1:
        cout << 8 << endl;
        break;
    case 2:
        cout << 4 << endl;
        break;
    case 3:
        cout << 2 << endl;
        break;
    }
    // }
    return 0;
}