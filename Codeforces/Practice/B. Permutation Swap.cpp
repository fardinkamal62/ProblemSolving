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
        int n, res = 0;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            res = __gcd(res, abs(x - i));
        }
        cout << res << endl;
    }

    return 0;
}