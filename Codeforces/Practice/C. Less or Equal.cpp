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
    
    ll n, k, ans = 0;
    cin >> n >> k;

    ll arr[n];
    for (ll i = 0; i < n; i++) cin >> arr[i];

    sort(arr, arr + n);

    if (k == 0) ans = arr[0] - 1;
    else ans = arr[k - 1];

    ll count = 0;
    for (ll i = 0; i < n ; i++)
    {
        if (arr[i] <= ans) {
            count++;
        }
    }

    // for (ll a: arr) {
    //     cout << a << " ";
    // }
    // cout << endl;
    
    if (count == k && ans >= 1 && ans <= 1e9) {
        cout << ans << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}