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
    vector<ll> a(n);

    for (ll i = 0; i < n; i++)
        cin >> a[i];

    ll ans = 0, sum = 0, left = 0;
    for (ll right = 0; right < n; right++)
    {
        sum += a[right];
        while (sum > k)
            sum -= a[left++];
        ans = max(ans, right - left + 1);
    }
    cout << ans << endl;

    return 0;
}