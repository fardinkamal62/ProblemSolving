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
        ll n, l, r;
        cin >> n >> l >> r;

        vector<ll> a(n);
        for (ll i = 0; i < n; i++) a[i] = i + 1;

        for (ll i = l - 1; i < r; i++) {
            a[i] = 0;
        }

        for (ll i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}