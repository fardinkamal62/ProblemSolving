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

    ll n, m, a;
    cin >> n >> m >> a;

    cout << ((n + a - 1) / a) * ((m + a - 1) / a) << endl;

    return 0;
}