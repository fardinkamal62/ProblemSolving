#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;

    while (tt--)
    {
        int n, max_val = 0, second_max = 0;
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
            cin >> v[i];

        for (int i = 1; i < n; i++)
            max_val = max(max_val, v[i] * v[i - 1]);

        cout << max_val << endl;
    }

    return 0;
}