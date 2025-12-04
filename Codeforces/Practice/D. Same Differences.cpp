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
        ll n, result = 0;
        cin >> n;
        map<ll, ll> mp;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            x -= i;
            result += mp[x];
            mp[x]++;
        }
        cout << result << endl;
    }

    return 0;
}