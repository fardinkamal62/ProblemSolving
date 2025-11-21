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
    
    while (tt--) {
        ll n, q;
        cin >> n >> q;

        vector<ll> pref;
        pref.push_back(0);
        vector<ll> prefmax;

        for (int i = 0; i < n; i++) {
            ll x;
            cin >> x;
            pref.push_back(pref.back() + x);
            if (i == 0) {
                prefmax.push_back(x);
            } else {
                prefmax.push_back(max(prefmax.back(), x));
            }
        }

        for (int i = 0; i < q; i++) {
            ll k;
            cin >> k;
            ll ind = upper_bound(prefmax.begin(), prefmax.end(), k) - prefmax.begin();
            cout << pref[ind] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
