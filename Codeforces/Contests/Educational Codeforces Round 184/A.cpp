#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;

    while (tt--)
    {
        int n;
        ll a;
        cin >> n >> a;
        
        vector<ll> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        ll best_b = 1;
        
        
        vector<ll> candidates;
        
        if (v[0] < a) {
            candidates.push_back(v[0] - 1);
            candidates.push_back((v[0] + a) / 2);
        }
        
        if (v[n-1] > a) {
            candidates.push_back(v[n-1] + 1);
            candidates.push_back((v[n-1] + a + 1) / 2);
        }
        
        int max_gap_start = -1;
        ll max_gap = 0;
        for (int i = 0; i < n - 1; i++) {
            ll gap = v[i+1] - v[i];
            if (gap > max_gap) {
                max_gap = gap;
                max_gap_start = i;
            }
        }
        
        if (max_gap_start != -1 && max_gap > 1) {
            ll mid = (v[max_gap_start] + v[max_gap_start + 1]) / 2;
            candidates.push_back(mid);
            candidates.push_back(mid - 1);
            candidates.push_back(mid + 1);
        }
        
        if (a > 1) candidates.push_back(a - 1);
        candidates.push_back(a + 1);
        
        int max_wins = -1;
        for (ll b : candidates) {
            if (b < 1 || b > 2e9) continue;
            
            int wins = 0;
            for (int i = 0; i < n; i++) {
                if (abs(v[i] - b) < abs(v[i] - a)) {
                    wins++;
                }
            }
            
            if (wins > max_wins) {
                max_wins = wins;
                best_b = b;
            }
        }
        
        cout << best_b << endl;
    }

    return 0;
}