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
    	ll n, k;
    	cin >> n >> k;

    	string s;
    	cin >> s;

    	vector<ll> w(n + 1, 0);

    	for (int i = 1; i <= n; ++i) w[i] = w[i - 1] + int(s[i - 1] == 'W');

    	ll result = LLONG_MAX;

    	for (ll i = k; i <= n; i++)
            result = min(result, w[i] - w[i - k]);
        cout << result << endl;
    }
    
    return 0;
}