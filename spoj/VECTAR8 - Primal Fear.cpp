#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

vector<bool> sieveOfEratosthenes(long long n)
{
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (long long i = 2; i * i <= n; i++)
    {
        if (is_prime[i])
        {
            for (long long j = i * i; j <= n; j += i)
            {
                is_prime[j] = false;
            }
        }
    }
    return is_prime;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<bool> is_prime = sieveOfEratosthenes(1e6);

    int tt;
    cin >> tt;

    while (tt--)
    {
    }

    return 0;
}