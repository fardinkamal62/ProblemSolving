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

bool isprime(int n)
{
    for (int i = 2; i * i <= n; ++i)
        if (n % i == 0)
            return false;
    return true;
}

int main()
{
    fastIO();

    ll tt;
    cin >> tt;

    while (tt--)
    {
        ll n;
        cin >> n;

        int win;
        if (n == 1)
        {
            win = 0;
        }
        else if (n % 2 == 1)
        {
            win = 1;
        }
        else if (n == 2)
        {
            win = 1;
        }
        else if ((n & -n) == n)
        {
            win = 0;
        }
        else if (n % 4 == 0)
        {
            win = 1;
        }
        else if (isprime(n / 2))
        {
            win = 0;
        }
        else
        {
            win = 1;
        }
        cout << (win ? "Ashishgup" : "FastestFinger") << endl;
    }

    return 0;
}