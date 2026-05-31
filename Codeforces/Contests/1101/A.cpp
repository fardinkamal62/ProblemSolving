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

        for (int i = 0; i < n; i++)
            cin >> a[i];

        ll calls = n;
        set<ll> vals(a.begin(), a.end());

        for (ll v : vals)
        {
            ll l = 0, r = 0;
            for (ll x : a)
            {
                if (x < v)
                    l++;
                else if (x > v)
                    r++;
            }
            calls = min(calls, max(l, r));
        }
        cout << calls << endl;
    }

    return 0;
}