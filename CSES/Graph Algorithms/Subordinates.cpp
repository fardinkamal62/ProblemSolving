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

vector<vector<ll>> graph;
vector<ll> sub;

ll dfs(ll u)
{
    for (auto v : graph[u])
        sub[u] += dfs(v);
    return sub[u] + 1;
}

int main()
{
    fastIO();

    ll n;
    cin >> n;

    graph.assign(n + 1, {});
    sub.assign(n + 1, 0);

    for (int i = 2; i <= n; i++)
    {
        ll x;
        cin >> x;
        graph[x].push_back(i);
    }

    dfs(1);

    for (int i = 1; i <= n; i++)
        cout << sub[i] << " \n"[i == n];

    return 0;
}