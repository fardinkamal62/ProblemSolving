// Tags: Sparse table, Range Minimum Query

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

int LOG = 18;

int main()
{
    fastIO();

    ll n, q;
    cin >> n >> q;

    ll arr[n];
    ll sparse_table[n][LOG];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        sparse_table[i][0] = arr[i];
    }

    for (ll j = 1; j < LOG; j++)
    {
        for (ll i = 0; i + (1 << j) <= n; i++)
        {
            sparse_table[i][j] = min(sparse_table[i][j - 1], sparse_table[i + (1 << (j - 1))][j - 1]);
        }
    }

    for (ll i = 0; i < q; i++)
    {
        ll l, r;
        cin >> l >> r;
        l--, r--;
        ll j = __lg(r - l + 1);
        ll minimum = min(sparse_table[l][j], sparse_table[r - (1 << j) + 1][j]);
        cout << minimum << endl;
    }

    return 0;
}
