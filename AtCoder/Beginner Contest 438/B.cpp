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

    ll n, m;
    cin >> n >> m;

    string s, t;
    cin >> s >> t;

    ll minOps = LLONG_MAX;

    for (ll i = 0; i <= n - m; i++)
    {
        ll ops = 0;

        for (ll j = 0; j < m; j++)
        {
            int digitT = t[j] - '0';
            int digitS = s[i + j] - '0';

            ops += (digitS - digitT + 10) % 10;
        }

        minOps = min(minOps, ops);
    }

    cout << minOps << endl;

    return 0;
}