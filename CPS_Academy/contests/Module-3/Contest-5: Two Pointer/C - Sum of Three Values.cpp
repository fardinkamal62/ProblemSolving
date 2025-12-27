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
    
    vector<pair<ll, ll>> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i;
    }
    
    sort(a.begin(), a.end());
    
    for (ll i = 0; i < n - 2; i++)
    {
        ll target = x - a[i].first;
        ll left = i + 1;
        ll right = n - 1;
        
        while (left < right)
        {
            ll sum = a[left].first + a[right].first;
            
            if (sum == target)
            {
                cout << a[i].second + 1 << " " 
                     << a[left].second + 1 << " " 
                     << a[right].second + 1 << endl;
                return 0;
            }
            else if (sum < target)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
    }
    
    cout << "IMPOSSIBLE" << endl;
    
    return 0;
}