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
    
    string s;
    cin >> s;
    int n = s.size();
    
    // Build prefix sums
    vector<int> psa(n + 1, 0), psb(n + 1, 0);
    for (int i = 0; i < n; i++) {
        psa[i + 1] = psa[i] + (s[i] == 'a');
        psb[i + 1] = psb[i] + (s[i] == 'b');
    }
    
    int ans = 0;
    // Try all possible splits [0,i), [i,j), [j,n]
    for (int i = 0; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            // First part: count of 'a' in [0, i)
            // Middle part: count of 'b' in [i, j)
            // Last part: count of 'a' in [j, n]
            int len = psa[i] + (psb[j] - psb[i]) + (psa[n] - psa[j]);
            ans = max(ans, len);
        }
    }
    
    cout << ans << endl;
    
    return 0;
}