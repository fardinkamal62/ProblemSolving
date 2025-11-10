#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll a, b;
    cin >> a >> b;
    ll result = a;
    while (a >= b)
    {
        ll div = a / b;
        result += div;
        a = div + (a % b);
    }

    cout << result << endl;

    return 0;
}