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
        int n;
        cin >> n;

        int a[n + 1];
        
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        int res = a[1];
        for (int i = 2; i <= n; i++)
            res &= a[i];
        cout << res << endl;
    }

    return 0;
}