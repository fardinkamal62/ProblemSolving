#include <bits/stdc++.h>
using namespace std;

vector<long long> sieveOfEratosthenes(long long n)
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
    vector<long long> primes;
    for (long long i = 2; i <= n; i++)
    {
        if (is_prime[i])
            primes.push_back(i);
    }
    return primes;
}