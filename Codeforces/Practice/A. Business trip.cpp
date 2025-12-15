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

    ll k;
    cin >> k;

    vector<ll> a(12);
    for (int i = 0; i < 12; ++i)
    {
        cin >> a[i];
    }

    if (k == 0)
    {
        cout << 0 << endl;
        return 0;
    }

    sort(a.rbegin(), a.rend());

    ll sum = 0;
    for (int i = 0; i < 12; ++i)
    {
        sum += a[i];
        if (sum >= k)
        {
            cout << i + 1 << endl;
            return 0;
        }
    }

    cout << -1 << endl;

    return 0;
}