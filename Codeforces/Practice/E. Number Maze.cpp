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
        string s;
        ll x, y;
        cin >> s >> x >> y;
        x--, y--;

        sort(s.begin(), s.end());
        vector<string> perms;
        perms.push_back(s);

        while (next_permutation(s.begin(), s.end())) 
            perms.push_back(s);
        
        string a = perms[x];
        string b = perms[y];

        ll A = 0, B = 0;
        for(ll i = 0; i < (ll)a.size(); i++) {
            if (a[i] == b[i]) A++, a[i] = '?', b[i] = '?';
        }

        for(ll i = 0; i < (ll)a.size(); i++) {
            if (a[i] != '?') {
                for(ll j = 0; j < (ll)b.size(); j++) {
                    if (b[j] != '?' && a[i] == b[j]) {
                        B++;
                        b[j] = '?';
                        break;
                    }
                }
            }
        }
        cout << A << "A" << B << "B" << endl;
    }
    
    return 0;
}