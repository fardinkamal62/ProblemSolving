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
        ll x1, y1, r1, x2, y2, r2;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

        ll dx = x2 - x1, dy = y2 - y1;
        ll d2 = dx * dx + dy * dy;

        ll rsum = r1 + r2, rdiff = abs(r1 - r2);

        if (d2 <= rsum * rsum && d2 >= rdiff * rdiff)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}