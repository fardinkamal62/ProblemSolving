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

ll f(ll x)
{
    ll ans = 0;
    while (x != 0)
    {
        int digit = x % 10;
        ans += digit * digit;
        x /= 10;
    }
    return ans;
}

int main()
{
    fastIO();

    int n;
    cin >> n;

    set<ll> visited;
    while (true)
    {
        if (n == 1)
        {
            cout << "Yes" << endl;
            break;
        }
        if (visited.count(n))
        {
            cout << "No" << endl;
            break;
        }
        visited.insert(n);
        n = f(n);
    }

    return 0;
}