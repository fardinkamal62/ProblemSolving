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
        ll n, m;
        string s;

        cin >> n >> s >> m;
        
        for (int i = 0; i < n && m > 0; i++) {
            if (s[i] != 'a') {
                ll ops_needed = 26 - (s[i] - 'a');
                
                if (m >= ops_needed) {
                    s[i] = 'a';
                    m -= ops_needed;
                }
            }
        }
        
        if (m > 0) {
            m %= 26;
            s[n-1] = (char)('a' + (s[n-1] - 'a' + m) % 26);
        }
        
        cout << s << endl;
    }
    
    return 0;
}