#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;
    while (tt--) {
        ll n;
        cin >> n;
        string s;
        cin >> s;

        // ll start = -1, end = -1;
        vector<ll> zeros;
        for (int i = 0; i < s.size(); i++) {
            // if (start == -1 && s[i] != '0') {
            //     start = i;
            // }
            if (s[i] == '0') {
                zeros.push_back(i);
            }
        }

        cout << zeros.size() << endl;
        for(ll &z : zeros) cout << z + 1 << " ";
        cout << endl;
    }
    return 0;
}
