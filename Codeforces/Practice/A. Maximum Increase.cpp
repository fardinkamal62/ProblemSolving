#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;

    vector<ll> a(tt);
    while (tt--) cin >> a[tt];

    ll ans = 0, cur = 0;
    for (int i = 0; i < a.size() - 1; i++)
    {
        if (a[i] > a[i + 1]) cur++;
        else {
            cur = 0;
            ans = max(ans, cur);
        }

        if (cur > ans)
            ans = cur;
    }
    cout << ans + 1<< endl;


    return 0;
}