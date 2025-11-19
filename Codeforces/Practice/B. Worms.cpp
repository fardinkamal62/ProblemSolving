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

    vector<ll> a(tt);
    vector<ll> prefix(tt + 1, 0);
    
    for (int i = 0; i < tt; ++i) cin >> a[i];
    for (int i = 1; i <= tt; ++i) prefix[i] = prefix[i - 1] + a[i - 1];

    ll m;
	cin >> m;

	for(int i = 0; i < m; i++) {
		int q; cin >> q;
		cout << lower_bound(prefix.begin(), prefix.end(), q) - prefix.begin() << '\n';
	}
    
    return 0;
}