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

    ll n, k;
    cin >> n >> k;

    vector<ll> heights(n);
    for (ll i = 0; i < n; i++)
        cin >> heights[i];

    vector<ll> prefix(n + 1, 0);
    for (ll i = 1; i <= n; i++)
        prefix[i] = prefix[i - 1] + heights[i - 1];

    ll max_sum = LLONG_MAX, ans;
    for (ll i = 0; i + k - 1 < n; i++)
    {
        if (prefix[i + k] - prefix[i] < max_sum)
        {
            max_sum = prefix[i + k] - prefix[i];
            ans = i + 1;
        }
    }

    cout << ans << endl;

    return 0;
}