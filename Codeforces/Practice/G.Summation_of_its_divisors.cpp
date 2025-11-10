#include "bits/stdc++.h"

using namespace std;

#define endl "\n"

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long n;
    cin >> n;

    long long sum_of_divisors = 0;
    for (long long i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            sum_of_divisors += i; // Add the divisor
            if (i != n / i)       // Add the paired divisor if it's distinct
                sum_of_divisors += n / i;
        }
    }

    cout << sum_of_divisors << endl;

    return 0;
}