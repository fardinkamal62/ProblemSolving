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
        ll k;
        cin >> k;

        vector<ll> b(k);
        ll sum = 0;
        for (int i = 0; i < k; i++)
            cin >> b[i], sum += b[i];

        if (sum == k)
            cout << 0 << endl;
        else if (sum > k)
            cout << sum - k << endl;
        else
            cout << 1 << endl;
    }

    return 0;
}