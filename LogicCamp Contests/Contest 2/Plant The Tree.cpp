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

    ll year;
    cin >> year;

    if (year == 1)
    {
        cout << 1 << endl;
        return 0;
    }

    long long ans = 1LL << (2 * year - 3);
    cout << ans << endl;

    return 0;
}
