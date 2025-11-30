#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

ll binary_search(const vector<ll>& arr, ll target) {
    ll left = 0;
    ll right = arr.size() - 1;
    ll result = 0;

    while (left <= right) {
        ll mid = left + (right - left) / 2;

        if (arr[mid] <= target) {
            result = mid + 1;
            left = mid + 1;
            // return mid;
        }
        else {
            right = mid - 1;
        }
    }

    return result;
}

int main() {
    fastIO();
    
    ll n, m;
    cin >> n >> m;

    vector<ll> arr(n);
    
    for (ll i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());
    for (ll i = 0; i < m; i++) {
        ll x;
        cin >> x;
        ll pos = binary_search(arr, x);
        cout << pos << " ";
    }
    
    return 0;
}