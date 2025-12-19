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
        ll r;
        cin >> r;

        ll d = 11;
        vector<ll> ans;
        while (r >= d)
        {
            if (r % d == 0)
                ans.push_back(r / d);
            d = (d - 1) * 10 + 1;
        }

        cout << ans.size() << endl;

        if (!ans.size())
            continue;
        for (int i = ans.size() - 1; i >= 0; --i)
            cout << ans[i] << ' ';

        cout << endl;
    }

    return 0;
}