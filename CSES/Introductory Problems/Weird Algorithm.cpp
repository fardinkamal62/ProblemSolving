#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll tt;
    cin >> tt;
    cout << tt << " ";

    while (tt != 1)
    {
        if (tt & 1) tt = 3 * tt + 1;
        else tt /= 2;
        cout << tt << " ";
    }
    cout << endl;

    return 0;
}
