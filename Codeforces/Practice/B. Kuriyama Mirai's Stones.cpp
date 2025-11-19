#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    fastIO();
    
    ll n;
    cin >> n;

    vector<ll> stones(n);
    for (ll i = 0; i < n; i++) cin >> stones[i];

    vector<ll> prefix_sum(n + 1, 0);
    for (ll i = 1; i <= n; i++) prefix_sum[i] = prefix_sum[i - 1] + stones[i - 1];

    sort(stones.begin(), stones.end());
    vector<ll> sorted_prefix_sum(n + 1, 0);
    for (ll i = 1; i <= n; i++) sorted_prefix_sum[i] = sorted_prefix_sum[i - 1] + stones[i - 1];

    ll q;
    cin >> q;
    for (int i = 0; i < q; i++) 
    {
        ll type, l, r;
        cin >> type >> l >> r;
        if (type == 1) cout << prefix_sum[r] - prefix_sum[l - 1] << endl;
        else cout << sorted_prefix_sum[r] - sorted_prefix_sum[l - 1] << endl;
    }
    
    return 0;
}