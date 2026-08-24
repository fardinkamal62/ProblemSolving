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

    ll x, y;
    cin >> x >> y;

    if (x % 16 == 0 && y % 9 == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}