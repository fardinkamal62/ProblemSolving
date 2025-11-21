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

    ll maximum = 2e5 + 10;

    vector<ll> sum(maximum, 0);

    for (int i = 1; i < maximum; ++i)
    {
    	ll temp = 0;
    	ll x= i;
		while (x)
		{
			temp += x % 10;
			x /= 10;
		}
		sum[i] = sum[i - 1] + temp;
    }
    
    ll tt;
    cin >> tt;

    while (tt--)
    {
    	ll q;
    	cin >> q;

    	cout << sum[q] << endl;
    }
    
    return 0;
}