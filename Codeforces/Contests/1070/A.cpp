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

    ll tt;
    cin >> tt;

    while (tt--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        int mx = INT_MIN;
        int ans = 0;
        for (int i = 0; i < n; ++i)
        {
            if (a[i] < mx)
                ++ans;
            else
                mx = a[i];
        }
        cout << ans << '\n';
    }

    return 0;
}