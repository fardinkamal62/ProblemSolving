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
        ll n;
        cin >> n;

        vector<ll> arr(n);
        for (ll i = 0; i < n; i++) cin >> arr[i];

        vector<ll> prefix(n + 1, 0);
        vector<ll> suffix(n + 2, 0);
        for (ll i = 1; i <= n; i++) prefix[i] = prefix[i - 1] + arr[i - 1];
        for (ll i = n; i >= 1; i--) suffix[i] = suffix[i + 1] + arr[i - 1];

        // // Prefix array
        // for (ll pref: prefix) cout << pref << " ";
        // cout << endl;
        // // Suffix array
        // for (ll suff: suffix) cout << suff << " ";
        // cout << endl;

        ll val = LLONG_MAX;
        ll index = -1;
        for (ll i = 1; i <= n; i++) {
            // val = min(val, );
            if ((prefix[i] + suffix[i]) < val) {
                index = i;
                val = prefix[i] + suffix[i];
            }
        }
        cout << index << endl;
    }
    
    return 0;
}