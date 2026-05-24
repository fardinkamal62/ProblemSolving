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

    ll tt, result = 0;
    cin >> tt;

    while (tt--)
    {
        ll a, b, c;
        cin >> a >> b >> c;

        if ((a + b + c) >= 2)
            result++;
    }
    cout << result << endl;

    return 0;
}