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
        set<ll> s;

        ll minimum_num = LLONG_MAX;
        ll maximum_num = LLONG_MIN;

        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            s.insert(a[i]);
            minimum_num = min(minimum_num, a[i]);
            maximum_num = max(maximum_num, a[i]);
        }

        if (s.size() == 1)
        {
            cout << 0 << endl;
            continue;
        }

        ll middle_num = (minimum_num + maximum_num) / 2;

        vector<ll> result;

        for (int i = 0; i < a.size(); i++)
        {
            ll curr = a[i];
            result.push_back(abs(curr - middle_num));
        }

        cout << *max_element(result.begin(), result.end()) << endl;
    }

    return 0;
}