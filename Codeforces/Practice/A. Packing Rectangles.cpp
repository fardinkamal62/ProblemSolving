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

    ll w, h, n;
    cin >> w >> h >> n;

    ll best = LLONG_MAX;
    ll sq = (ll)sqrt((double)n) + 2;

    for (ll c = 1; c <= sq; c++)
    {
        ll r = (n + c - 1) / c;
        best = min(best, max(c * w, r * h));
    }

    for (ll r = 1; r <= sq; r++)
    {
        ll c = (n + r - 1) / r;
        best = min(best, max(c * w, r * h));
    }

    cout << best << endl;
}
