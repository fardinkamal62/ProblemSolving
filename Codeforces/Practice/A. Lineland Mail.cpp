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

    ll n;
    cin >> n;

    vector<ll> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << a[1] - a[0] << ' ' << a[n - 1] - a[0] << endl;

    for (int i = 1; i < n - 1; i++)
        cout << min(a[i + 1] - a[i], a[i] - a[i - 1]) << ' ' << max(a[i] - a[0], a[n - 1] - a[i]) << endl;

    cout << a[n - 1] - a[n - 2] << ' ' << a[n - 1] - a[0] << endl;
    return 0;

    return 0;
}