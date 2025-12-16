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

vector<int> adj[2001];
bool vis[2001];

int dfs(int s, int f, int d)
{
    int mx = d, sz = adj[s].size();
    vis[s] = true;
    for (int i = 0; i < sz; i++)
        if (adj[s][i] != f)
            mx = max(mx, dfs(adj[s][i], s, d + 1));
    return mx;
}

int main()
{
    fastIO();

    ll n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        if (x != -1)
            adj[x].push_back(i);
    }

    int m = -1;


    for (int i = 1; i <= n; i++)
        if (!vis[i])
            m = max(dfs(i, -1, 1), m);


    cout << m << endl;

    return 0;
}