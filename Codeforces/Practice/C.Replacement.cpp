#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;

    while (tt--)
    {
        int n;
        cin >> n;
        if (n < 0)
            cout << "2 ";
        else if (n > 0)
            cout << "1 ";
        else
            cout << "0 ";
    }
    cout << endl;

    return 0;
}