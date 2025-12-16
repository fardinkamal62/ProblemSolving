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
    
    ll n;
    cin >> n;

    map<int, int> freq;
    for (ll i = 0; i < n; i++) {
        int x;
        cin >> x;
        freq[x]++;
    }

    for (const auto& p : freq) {
        if (p.second == 1) {
            cout << p.first << endl;
            break;
        }
    }
    
    return 0;
}