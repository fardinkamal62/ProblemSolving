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

const int mod = 1e9 + 7;
int main()
{
    fastIO();

    ll tt;
    cin >> tt;

    while (tt--)
    {
        int n, k;
        cin >> n >> k;
        int ans = 1;
        while (k--)
        {
            ans = 1LL * ans * n % mod;
        }
        cout << ans << endl;
    }

    return 0;
}