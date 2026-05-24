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

        vector<ll> a(n);
        vector<ll> negative_num_index;

        for (int i = 0; i < n; i++)
            cin >> a[i], a[i] < 0 ? negative_num_index.push_back(i) : void();

        vector<ll> ops;
        ll flips = 0;

        for (ll i = n - 1; i >= 0; i--)
        {
            ll cur = (flips % 2 == 0) ? a[i] : -a[i];
            if (cur > 0)
            {
                ops.push_back(i + 1);
                flips++;
            }
        }

        cout << ops.size() << endl;
        for (ll i = 0; i < (ll)ops.size(); i++)
            cout << ops[i] << " \n"[i + 1 == (ll)ops.size()];

        if (ops.empty())
            cout << endl;
    }

    return 0;
}