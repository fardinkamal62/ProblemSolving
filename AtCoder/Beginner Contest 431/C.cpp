/**
 *   author:   @fardinkamal62
 **/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, m, k, ans = 0;
    cin >> n >> m >> k;
    vector<ll> h(n, -1);
    vector<ll> b(m, -1);

    for (ll i = 0; i < n; i++)
        cin >> h[i];
    for (ll i = 0; i < m; i++)
        cin >> b[i];

    sort(h.begin(), h.end());
    sort(b.begin(), b.end());

    ll i = 0, j = 0;
    while (i < n && j < m)
    {
        if (h[i] <= b[j])
        {
            // cout << "Found match: " << h[i] << " " << b[j] << endl;
            ans++;
            i++;
            j++;
        }
        else
        {
            j++;
        }
    }

    // cout << "Total: " << ans << endl;

    if (ans < k) cout << "No" << endl;
    else cout << "Yes" << endl;

    return 0;
}
