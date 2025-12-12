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

long long lcm(long long a, long long b)
{
    return (a / __gcd(a, b)) * b;
}

long long range_sum(long long l, long long r)
{
    if (l > r)
        return 0;
    return (l + r) * (r - l + 1) / 2;
}

int main()
{
    fastIO();

    ll tt;
    cin >> tt;

    while (tt--)
    {
        long long n, x, y;
        cin >> n >> x >> y;

        long long L = lcm(x, y);
        long long plus = n / x - n / L;
        long long minus = n / y - n / L;

        long long result = range_sum(n - plus + 1, n) - range_sum(1, minus);

        cout << result << "\n";
    }

    return 0;
}