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
        ll n;
        cin >> n;
        
        vector<pair<ll, ll>> reindeer(n);
        for (int i = 0; i < n; i++)
        {
            cin >> reindeer[i].first >> reindeer[i].second;
        }
        
        sort(reindeer.begin(), reindeer.end(), [](const pair<ll, ll>& a, const pair<ll, ll>& b) {
            return a.first + a.second < b.first + b.second;
        });
        
        ll sumP = 0;
        for (int i = 0; i < n; i++)
        {
            sumP += reindeer[i].second;
        }
        
        ll answer = 0;
        ll sumWP = 0;
        
        for (int i = 0; i < n; i++)
        {
            sumWP += reindeer[i].first + reindeer[i].second;
            if (sumP < sumWP)
            {
                answer = i;
                break;
            }
        }
        
        if (sumP >= sumWP)
        {
            answer = n;
        }
        
        cout << answer << endl;
    }
    
    return 0;
}