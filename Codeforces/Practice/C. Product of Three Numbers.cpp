#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;
    while (tt--) {
        ll n;
        cin >> n;
        set<ll> used;
        
        for (ll i = 2; i * i <= n; ++i) {
            if (n % i == 0 && !used.count(i)) {
                used.insert(i);
                n /= i;
                break;
            }
        }
        
        for (ll i = 2; i * i <= n; ++i) {
            if (n % i == 0 && !used.count(i)) {
                used.insert(i);
                n /= i;
                break;
            }
        }
        
        if (used.size() < 2 || used.count(n) || n == 1) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            used.insert(n);
            for (auto it : used) cout << it << " ";
            cout << endl;
        }
    }
    return 0;
}