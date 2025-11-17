#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, q;
    cin >> n >> q;

    vector<ll> arr(n);
    vector<ll> prefix(n + 1, 0);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (i > 0) prefix[i] = prefix[i - 1] + arr[i - 1];
    }
    prefix[n] = prefix[n - 1] + arr[n - 1];


    for (ll i = 0; i < q; i++)
    {
        ll min, max;
        cin >> min >> max;

        cout << prefix[max] - prefix[min - 1]<< endl;
    }
    

    return 0;
}