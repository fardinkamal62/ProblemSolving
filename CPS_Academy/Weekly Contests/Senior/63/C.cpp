/**
 *   author:   @fardinkamal62
 **/

#include "iostream"
using namespace std;

long long solve(long long n)
{
    if (n < 6)
        n = 6;

    if (n % 2 != 0)
        n += 1;

    if (n % 6 == 0)
        return (n / 6) * 15;
    else if (n % 8 == 0)
        return (n / 8) * 20;
    else if (n % 10 == 0)
        return (n / 10) * 25;
}

int main()
{
#ifdef ONLINEJUDGE
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    long long tt;
    cin >> tt;

    while (tt--)
    {
        long long n;
        cin >> n;
        cout << solve(n) << endl;
    }

#ifdef ONLINEJUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);
#endif

    return 0;
}
