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

    vector<ll> heights(n), leaves(n);

    for (int i = 0; i < n; i++)
    {
        cin >> heights[i] >> leaves[i];
    }

    vector<ll> suffix_max(n + 1, 0);
    for (ll i = n - 1; i >= 0; i--)
    {
        suffix_max[i] = max(heights[i], suffix_max[i + 1]);
    }

    ll q;
    cin >> q;
    while (q--)
    {
        ll t;
        cin >> t;
        ll idx = upper_bound(leaves.begin(), leaves.end(), t) - leaves.begin();
        cout << suffix_max[idx] << endl;
    }

    return 0;
}