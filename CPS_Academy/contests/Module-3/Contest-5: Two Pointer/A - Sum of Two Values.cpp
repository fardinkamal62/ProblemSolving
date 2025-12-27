#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main()
{
    fastIO();

    ll n, x;
    cin >> n >> x;

    vector<ll> a(n);
    for (ll i = 0; i < n; i++) cin >> a[i];

    map<ll, ll> values;

    for (ll i = 0; i < n; i++)
    {
        ll complement = x - a[i];
        
        if (values.count(complement))
        {
            cout << values[complement] + 1 << " " << i + 1 << endl;
            return 0;
        }
        
        values[a[i]] = i;
    }
    
    cout << "IMPOSSIBLE" << endl;

    return 0;
}