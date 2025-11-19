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
    
    ll n, q;
    cin >> n >> q;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++) cin >> arr[i];

    vector<vector<ll>> prefix(n + 1, vector<ll>(3, 0));

    for (ll i = 1; i <= n; i++) {
        if (arr[i - 1] == 1) {
            prefix[i][0] = prefix[i - 1][0] + 1;
            prefix[i][1] = prefix[i - 1][1];
            prefix[i][2] = prefix[i - 1][2];
        } else if (arr[i - 1] == 2) {
            prefix[i][0] = prefix[i - 1][0];
            prefix[i][1] = prefix[i - 1][1] + 1;
            prefix[i][2] = prefix[i - 1][2];
        } else {
            prefix[i][0] = prefix[i - 1][0];
            prefix[i][1] = prefix[i - 1][1];
            prefix[i][2] = prefix[i - 1][2] + 1;
        }
    }

    for (int i = 0; i < q; i++)
    {
        ll l, r;
        cin >> l >> r;
        ll count1 = prefix[r][0] - prefix[l - 1][0];
        ll count2 = prefix[r][1] - prefix[l - 1][1];
        ll count3 = prefix[r][2] - prefix[l - 1][2];

        cout << count1 << " " << count2 << " " << count3 << endl;
    }
    
    
    return 0;
}