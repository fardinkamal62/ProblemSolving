// Getting TLE
// TODO - Solve later

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

    ll n;
    cin >> n;

    vector<ll> a(n + 1), b(n + 1), c(n + 1);

    for (ll i = 1; i <= n; i++)
        cin >> a[i];
    for (ll i = 1; i <= n; i++)
        cin >> b[i];
    for (ll i = 1; i <= n; i++)
        cin >> c[i];

    // Prefix sums
    vector<ll> prefix_a(n + 1, 0), prefix_b(n + 1, 0);
    for (ll i = 1; i <= n; i++)
    {
        prefix_a[i] = prefix_a[i - 1] + a[i];
        prefix_b[i] = prefix_b[i - 1] + b[i];
    }
    
    // Suffix sum for C (sum from i+1 to n)
    vector<ll> suffix_c(n + 1, 0);
    for (ll i = n - 1; i >= 1; i--)
    {
        suffix_c[i] = suffix_c[i + 1] + c[i + 1];
    }

    ll maxScore = LLONG_MIN;
    ll maxHeadMinusBody = LLONG_MIN;
    
    // Iterate through all possible y positions (body end)
    for (ll y = 2; y < n; y++)
    {
        // Update the maximum of (prefix_a[x] - prefix_b[x]) for all x < y
        maxHeadMinusBody = max(maxHeadMinusBody, prefix_a[y - 1] - prefix_b[y - 1]);
        
        // Calculate score for current y
        // Score = (prefix_a[x] - prefix_b[x]) + prefix_b[y] + suffix_c[y]
        ll currentScore = maxHeadMinusBody + prefix_b[y] + suffix_c[y];
        maxScore = max(maxScore, currentScore);
    }

    cout << maxScore << endl;

    return 0;
}