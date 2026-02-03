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

    ll n, k, years = 0;
    ll total = 0;
    cin >> n >> k;

    while (total < k)
    {
        total += n;
        if (total >= k)
            break;
        n++;
        years++;
    }
    cout << years << endl;

    return 0;
}