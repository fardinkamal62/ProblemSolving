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
        ll n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        set<ll> s(a, a + n);
        int distinct = s.size();
        
        while (s.find(distinct) == s.end()) {
            s.insert(distinct);
            distinct = s.size();
        }
        
        cout << distinct << endl;
    }
    
    return 0;
}