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
        
        int m = n * (n - 1) / 2, b[m];
        for (int i = 0; i < m; i++)
            cin >> b[i];
        sort(b, b + m);
        for (int i = 0; i < m; i += --n)
            cout << b[i] << ' ';
        cout << "1000000000\n";
    }

    return 0;
}