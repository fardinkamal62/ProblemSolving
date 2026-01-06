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

    int a[n][4];

    for (int i = 0; i < n; i++)
    {
        a[i][0] = 2 * i;
        a[i][1] = 2 * (n + i);
        a[i][2] = 2 * (n + i) + 1;
        a[i][3] = 2 * i + 1;
    }

    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        ans.push_back(a[i][1]);
        ans.push_back(a[i][0]);
        ans.push_back(a[i][2]);
        ans.push_back(a[i][3]);
    }

    for (int i = ans.size() - 1; i >= 0; i--)
    {
        if (ans[i] >= m)
            ans.erase(ans.begin() + i);
    }

    for (int i = 0; i < m; i++)
    {
        if (i)
            cout << " ";
        cout << ans[i] + 1;
    }
    cout << endl;

    return 0;
}