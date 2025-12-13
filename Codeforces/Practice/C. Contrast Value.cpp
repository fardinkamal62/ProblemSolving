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
        ll n;
        cin >> n;

        vector<int> a(n);
        for (int &x : a) cin >> x;

        n = unique(a.begin(), a.end()) - a.begin();
        int ans = n;
        for (int i = 0; i + 2 < n; ++i)
        {
            ans -= (a[i] < a[i + 1] && a[i + 1] < a[i + 2]);
            ans -= (a[i] > a[i + 1] && a[i + 1] > a[i + 2]);
        }
        cout << ans << endl;
    }

    return 0;
}