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

    ll y;
    cin >> y;

    if (y == 1)
    {
        cout << 1 << endl;
        return 0;
    }

    ll ans = 1LL << (2 * y - 3);
    cout << ans << endl;
    
    return 0;
}