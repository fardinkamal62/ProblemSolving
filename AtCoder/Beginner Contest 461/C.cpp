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

    int n, k, m;
    cin >> n >> k >> m;

    map<int, vector<ll>> gems;
    for (int i = 0; i < n; i++)
    {
        int c;
        ll v;
        cin >> c >> v;
        gems[c].push_back(v);
    }

    vector<ll> top;
    vector<ll> rest;
    for (auto &[c, gems] : gems)
    {
        sort(gems.begin(), gems.end(), greater<ll>());
        top.push_back(gems[0]);
        for (int i = 1; i < (int)gems.size(); i++)
            rest.push_back(gems[i]);
    }

    sort(top.begin(), top.end(), greater<ll>());

    ll ans = 0;
    for (int i = 0; i < m; i++)
        ans += top[i];

    for (int i = m; i < (int)top.size(); i++)
        rest.push_back(top[i]);

    sort(rest.begin(), rest.end(), greater<ll>());

    for (int i = 0; i < k - m && i < (int)rest.size(); i++)
        ans += rest[i];

    cout << ans << endl;

    return 0;
}
