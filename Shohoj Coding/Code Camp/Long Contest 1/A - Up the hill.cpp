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

    int a, b;
    cin >> a >> b;

    int n = a + b + 1;
    vector<int> ans(n);
    for (int i = 0; i < n; i++)
        ans[i] = i + 1;
    sort(ans.begin(), ans.begin() + b + 1, greater<int>());
    for (int i = 0; i < n; i++)
        cout << ans[i] << " \n"[i == n - 1];

    return 0;
}