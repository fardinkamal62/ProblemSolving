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

    vector<ll> blocks(n + 1, 0);

    for (int i = 0; i < m; i++)
    {
        ll a, b;
        cin >> a >> b;

        blocks[a] = blocks[b] = 1;
    }

    ll s;
    for (int i = 1; i <= n; i++)
        if (!blocks[i])
            s = i;

    cout << n - 1 << endl;

    for (int i = 1; i <= n; i++)
        if (i != s)
            cout << s << ' ' << i << endl;
    return 0;
}