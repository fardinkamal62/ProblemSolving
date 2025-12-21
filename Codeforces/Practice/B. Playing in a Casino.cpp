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
    
    ll tt;
    cin >> tt;
    
    while (tt--)
    {
        ll n, m;
        cin >> n >> m;
        
        vector<vector<ll>> cols(m, vector<ll>(n));
        
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                cin >> cols[j][i];
            }
        }
        
        ll totalSum = 0;
        
        for (ll j = 0; j < m; j++)
        {
            sort(cols[j].begin(), cols[j].end());
            
            ll prefixSum = 0;
            
            for (ll i = 0; i < n; i++)
            {
                totalSum += cols[j][i] * i - prefixSum;
                prefixSum += cols[j][i];
            }
        }
        
        cout << totalSum << endl;
    }
    
    return 0;
}