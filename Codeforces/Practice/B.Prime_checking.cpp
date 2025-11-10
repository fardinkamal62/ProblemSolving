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

    if (n == 0 || n == 1)
    {
        cout << "NO" << endl;
    } else {
        bool is_prime = true;
        for (long long i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                is_prime = false;
                break;
            }
        }
        if (is_prime)
        {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}