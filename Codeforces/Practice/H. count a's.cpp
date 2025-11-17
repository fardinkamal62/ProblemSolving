#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    ll tt;
    cin >> tt;

    vector<ll> prefix(s.size() + 1, 0);
    for (ll i = 1; i <= s.size(); i++)
    {
        if (s[i - 1] == 'a')
        {
            prefix[i] = prefix[i - 1] + 1;
        }
        else
        {
            prefix[i] = prefix[i - 1];
        }
    }


    while (tt--)
    {
        ll l, r;
        cin >> l >> r;
        cout << prefix[r] - prefix[l - 1] << endl;
    }

    return 0;
}