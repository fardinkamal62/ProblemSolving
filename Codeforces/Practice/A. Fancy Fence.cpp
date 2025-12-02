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
        ll a;
        cin >> a;
        cout << (360 % (180-a) == 0 ? "YES" : "NO") << endl;
    }
    
    return 0;
}