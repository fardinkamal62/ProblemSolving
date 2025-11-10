#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;

    while (tt--)
    {
        ll a, b;
        cin >> a >> b;

        if (a == 1)
            cout << b + 1 << endl;
        else
        {
            cout << a - 1 << endl;
        }
    }

    return 0;
}