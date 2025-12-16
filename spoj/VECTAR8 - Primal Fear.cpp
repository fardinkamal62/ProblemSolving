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

bool isFearfulPrime(int n, const vector<bool> &is_prime)
{
    string s = to_string(n);

    if (s.find('0') != string::npos)
        return false;

    for (int i = 0; i < s.length(); i++)
    {
        int truncated = stoi(s.substr(i));
        if (!is_prime[truncated])
            return false;
    }

    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<bool> is_prime = sieveOfEratosthenes(1e6);

    vector<int> fearful_count(1000001, 0);
    for (int i = 1; i <= 1000000; i++)
    {
        fearful_count[i] = fearful_count[i - 1];
        if (is_prime[i] && isFearfulPrime(i, is_prime))
        {
            fearful_count[i]++;
        }
    }

    int tt;
    cin >> tt;

    while (tt--)
    {
        int n;
        cin >> n;
        cout << fearful_count[n] << endl;
    }

    return 0;
}