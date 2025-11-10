#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, t;
    cin >> n >> t;

    if (t < 10)
    {
        string num = string(n, t + '0');
        cout << num << endl;
    }
    else if (t == 10)
    {
        if (n == 1)
        {
            cout << -1 << endl;
        }
        else
        {
            string num = "1" + string(n - 1, '0');
            cout << num << endl;
        }
    }

    return 0;
}