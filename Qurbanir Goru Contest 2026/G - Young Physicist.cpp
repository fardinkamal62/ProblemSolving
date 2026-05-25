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

    ll rows;
    cin >> rows;

    ll col1 = 0, col2 = 0, col3 = 0;

    while (rows--)
    {
        ll x, y, z;
        cin >> x >> y >> z;
        col1 += x;
        col2 += y;
        col3 += z;
    }

    if (col1 == 0 && col2 == 0 && col3 == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}