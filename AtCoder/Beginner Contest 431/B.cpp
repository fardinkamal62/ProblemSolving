/**
*   author:   @fardinkamal62
**/

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll x, n, q;
    cin >> x >> n;

    vector<ll> w(n);
    vector<bool> changes(n, 0);
    for (int i = 0; i < n; i++) cin >> w[i];

    cin >> q;

    for (int i = 0; i < q; i++)
    {
        ll n;
        cin >> n;
        if (changes[n - 1]) x -= w[n - 1];
        else x += w[n - 1];
        changes[n - 1] = !changes[n - 1];

        cout << x << endl;
    }

    // for (int i = 0; i < n; i++)
    // {
    //     if (changes[i])
    //     {
    //         x += w[i];
    //     }
    // }

    // cout << x << endl;

    return 0;
}
