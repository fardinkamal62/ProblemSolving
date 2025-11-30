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
    
    set<ll> s;
    while (tt--)
    {
        ll x, r;
        cin >> x >> r;

        ll forward = x + r;
        ll backward = x - r;

        if (s.find(forward) == s.end()) {
            s.insert(forward);
        } else if (s.find(backward) == s.end()) {
            s.insert(backward);
        }
    }
    cout << s.size() << endl;
    
    return 0;
}