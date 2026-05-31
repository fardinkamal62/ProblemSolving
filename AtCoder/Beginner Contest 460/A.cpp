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

    ll n, m, result = 0;
    cin >> n >> m;

    while (m > 0)
    {
        m = n % m;
        result++;
    }

    cout << result << endl;

    return 0;
}