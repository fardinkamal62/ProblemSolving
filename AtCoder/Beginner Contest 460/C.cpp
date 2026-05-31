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

    ll n, m;
    cin >> n >> m;

    vector<ll> A(n), B(m);
    for (int i = 0; i < n; i++)
        cin >> A[i];
    for (int i = 0; i < m; i++)
        cin >> B[i];

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    ll sushis = 0;
    ll j = 0;

    for (ll i = 0; i < n; i++)
    {
        while (j < m && B[j] <= 2 * A[i])
            j++;
        if (j > sushis)
            sushis++;
    }

    cout << sushis << endl;

    return 0;
}