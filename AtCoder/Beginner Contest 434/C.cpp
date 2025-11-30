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
    
    while (tt--)
    {
        ll n, h;
        cin >> n >> h;

        vector<tuple<ll, ll, ll>> checkpoints(n);

        for (ll i = 0; i < n; i++)
        {
            ll t, l, u;
            cin >> t >> l >> u;
            checkpoints[i] = {t, l, u};
        }

        bool possible = true;
        ll current_min = h, current_max = h;
        ll prev_time = 0;

        for (ll i = 0; i < n; i++)
        {
            ll t = get<0>(checkpoints[i]);
            ll l = get<1>(checkpoints[i]);
            ll u = get<2>(checkpoints[i]);
            
            ll time_diff = t - prev_time;
            
            ll reachable_min = current_min - time_diff;
            ll reachable_max = current_max + time_diff;
            
            reachable_min = max(1LL, reachable_min);
            
            if (reachable_max < l || reachable_min > u)
            {
                possible = false;
                break;
            }
            
            current_min = max(reachable_min, l);
            current_max = min(reachable_max, u);
            
            prev_time = t;
        }
        
        cout << (possible ? "Yes" : "No") << endl;
    }
    
    return 0;
}