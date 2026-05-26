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

    ll n, k;
    cin >> n >> k;

    n = n + 1;
    n = n / 2;
    if (k <= n)
    {
        k = k * 2 - 1;
    }
    else
    {
        k = k - n;
        k = k * 2;
    }
    cout << k << endl;

    return 0;
}