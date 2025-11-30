#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

ll binary_search(const vector<ll>& arr, ll target) {
    ll left = 0;
    ll right = arr.size() - 1;

    while (left <= right) {
        ll mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return -1;
}

int main()
{
    fastIO();

    ll tt;
    cin >> tt;

    vector<ll> arr(tt);

    for (ll i = 0; i < tt; i++)
        cin >> arr[i];

    ll target;
    cin >> target;

    cout << binary_search(arr, target) << endl;

    return 0;
}