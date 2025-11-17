#include <bits/stdc++.h>
#include <vector>
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
    	ll n, q;
    	cin >> n >> q;

    	vector<ll> v(n);
    	vector<ll> prefix(n + 1, 0);

    	for (int i = 0; i < n; ++i) cin >> v[i];

    	for (int i = 1; i <= n; ++i) prefix[i] = prefix[i - 1] + v[i - 1];

    	for (int i = 0; i < q; ++i)
    	{
    		ll l, r, k;
    		cin >> l >> r >> k;

    		ll result = prefix[r] - prefix[l - 1];
    		if (((prefix[n] - result) + (r - l + 1) * k) & 1) cout << "Yes" << endl;
    		else cout << "No" << endl;
    	}
    }
    
    return 0;
}