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

ll binary_search(const vector<ll> &arr, ll target)
{
    ll left = 0;
    ll right = arr.size() - 1;

    while (left <= right)
    {
        ll mid = left + (right - left) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1;
}

int main()
{
    fastIO();

    ll n, k;
    cin >> n >> k;

    vector<ll> arr(n);

    for (ll i = 0; i < n; i++)
        cin >> arr[i];

    for (ll i = 0; i < k; i++)
    {

        ll target;
        cin >> target;

        // cout << "Target: " << target << " -> " << " Result: " << binary_search(arr, target) << endl;

        cout << (binary_search(arr, target) > -1 ? "YES" : "NO") << endl;
    }

    return 0;
}