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

int main()
{
    fastIO();

    ll tt;
    cin >> tt;

    while (tt--)
    {
        ll n, x;
        cin >> n >> x;

        vector<ll> arr(n);

        for (ll i = 0; i < n; i++)
            cin >> arr[i];

        ll s = 0;
        sort(arr.begin(), arr.end());

        ll bonus_points = 0;

        ll left = 0, right = n - 1;

        vector<ll> result;

        while (left <= right)
        {
            ll current_loyalty = s / x;
            
            ll new_loyalty_expensive = (s + arr[right]) / x;

            if (new_loyalty_expensive > current_loyalty)
            {
                s += arr[right];
                bonus_points += arr[right];
                result.push_back(arr[right]);
                right--;
            }
            else
            {
                s += arr[left];
                result.push_back(arr[left]);
                left++;
            }
        }

        cout << bonus_points << endl;
        for (auto val : result)
            cout << val << " ";
        cout << endl;
    }

    return 0;
}