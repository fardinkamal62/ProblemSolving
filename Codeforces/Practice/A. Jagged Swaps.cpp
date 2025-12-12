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

        vector<ll> v(n);
        
        for (int i = 0; i < n; i++) cin >> v[i];
        
        if (v[0] == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}