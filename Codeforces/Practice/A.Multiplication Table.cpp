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

    ll n, x, result = 0;
    cin >> n >> x;

    for (ll i = 1; i <= n; i++)
    {
        if (x % i == 0 && x / i <= n)
        {
            // cout << "i:" << i << " ";
            result++;
        }
    }
    cout << result << endl;
    // }
    return 0;
}