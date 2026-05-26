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

    ll s, n;
    cin >> s >> n;

    vector<pair<ll, ll>> strength(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> strength[i].first >> strength[i].second;
    }

    sort(strength.begin(), strength.end());

    for (ll i = 0; i < n; i++)
    {
        if (s > strength[i].first)
        {
            s += strength[i].second;
        }
        else
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;

    return 0;
}