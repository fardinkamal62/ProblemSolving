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
        
        if (n % 2 == 1) {
            cout << 0 << endl;
        } else {
            cout << (n / 4 + 1) << endl;
        }
    }
    
    return 0;
}