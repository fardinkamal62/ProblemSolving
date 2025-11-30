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
    
    ll tt;
    cin >> tt;
    
    set<pair<ll, ll>> s;
    for (ll i = 0; i < tt; i++)
    {
        ll x, r;
        cin >> x >> r;

        ll forward = x + r;
        ll backward = x - r;

        s.insert({forward, i});
        s.insert({backward, i});
    }

    set<ll> used;
    set<ll> occupied_positions;
    ll ans = 0;

    for (auto it = s.begin(); it != s.end(); ++it) {
        ll pos = it->first;
        ll idx = it->second;
        
        if (used.find(idx) == used.end() && occupied_positions.find(pos) == occupied_positions.end()) {
            used.insert(idx);
            occupied_positions.insert(pos);
            ans++;
        }
    }
    cout << ans << endl;
    
    return 0;
}