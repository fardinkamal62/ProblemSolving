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
vector<bool> visited;

void dfs(ll u)
{
    visited[u] = true;
    for (auto v : graph[u])
    {
        if (!visited[v])
            dfs(v);
    }
}

int main()
{
    fastIO();

    ll n, m;
    cin >> n >> m;

    graph.resize(n + 1);
    visited.assign(n + 1, false);

    for (int i = 0; i < m; i++)
    {
        ll u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    vector<ll> components;
    for (ll u = 1; u <= n; u++)
    {
        if (!visited[u])
        {
            components.push_back(u);
            dfs(u);
        }
    }

    cout << components.size() - 1 << endl;
    for (int i = 0; i + 1 < (int)components.size(); i++)
        cout << components[i] << ' ' << components[i + 1] << endl;

    return 0;
}
