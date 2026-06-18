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

    int n, m;
    cin >> n >> m;

    vector<int> deg(n + 1, 0);

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        deg[u]++;
        deg[v]++;
    }

    string ans = "unknown topology";

    if (m == n)
    {
        int ok = 1;
        for (int i = 1; i <= n; i++)
            if (deg[i] != 2) ok = 0;
        if (ok) ans = "ring topology";
    }

    if (m == n - 1)
    {
        int ok = 0;
        for (int i = 1; i <= n; i++)
            if (deg[i] == n - 1) ok = 1;
        if (ok)
            ans = "star topology";
        else
        {
            int cnt = 0;
            for (int i = 1; i <= n; i++)
                if (deg[i] != 2) cnt++;
            if (cnt == 2) ans = "bus topology";
        }
    }

    cout << ans << endl;

    return 0;
}
