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

    while (tt--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n + 1);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a.begin(), a.end());

        bool possible = true;
        for (int i = 2; i <= n - 1; i += 2)
        {
            if (a[i] != a[i + 1])
            {
                possible = false;
                break;
            }
        }
        
        if (possible)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}