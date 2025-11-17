#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long


long long divisors(ll min, ll max, ll num)
{
    ll result = 0;
    for (long long i = min; i <= max; i++)
    {
        if (num % i == 0)
        {
            result++;
        }
    }
    return result;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll a, b, c;
    cin >> a >> b >> c;

    long long result = divisors(a, b, c);
    cout << result << endl;

    return 0;
}