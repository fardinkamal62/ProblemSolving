#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, a, b;
    cin >> n >> a >> b;

    cout << min((n - a), (n-b)) << endl;

    return 0;
}