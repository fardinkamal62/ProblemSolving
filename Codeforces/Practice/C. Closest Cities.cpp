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
        ll n; cin >> n;

        vector<ll> cities(n);
        for (ll i = 0; i < n; i++) cin >> cities[i];

        // prefix[i] = cost to go from city 0 to city i (left to right)
        // suffix[i] = cost to go from city i to city n-1 (right to left)
        vector<ll> prefix(n, 0);
        vector<ll> suffix(n, 0);

        // Calculate prefix costs (going right)
        for (ll i = 1; i < n; i++) {
            // If closest city to i-1 is to the right (city i), cost is 1
            // Otherwise, cost is the actual distance
            if (i - 2 >= 0 && cities[i] - cities[i - 1] > cities[i - 1] - cities[i - 2]) {
                prefix[i] = prefix[i - 1] + (cities[i] - cities[i - 1]);
            } else {
                prefix[i] = prefix[i - 1] + 1;
            }
        }

        // Calculate suffix costs (going left)
        for (ll i = n - 2; i >= 0; i--) {
            // If closest city to i+1 is to the left (city i), cost is 1
            // Otherwise, cost is the actual distance
            if (i + 2 < n && cities[i + 1] - cities[i] > cities[i + 2] - cities[i + 1]) {
                suffix[i] = suffix[i + 1] + (cities[i + 1] - cities[i]);
            } else {
                suffix[i] = suffix[i + 1] + 1;
            }
        }

        ll q; cin >> q;
        while (q--) {
            ll a, b; cin >> a >> b;
            a--; b--; // Convert to 0-indexed

            if (b > a) {
                cout << prefix[b] - prefix[a] << endl;
            } else {
                cout << suffix[b] - suffix[a] << endl;
            }
        }
    }
    
    return 0;
}