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
        ll n; cin >> n;

        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            int x; cin >> x;
            mp[x]++;
        }

        if (mp.size() >= 3) cout << "NO" << endl;
        else
        {
            if (abs(mp.begin()->second - mp.rbegin()->second) <= 1) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    
    return 0;
}