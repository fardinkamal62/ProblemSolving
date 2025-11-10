/**
 *   author:   @fardinkamal62
 *   created:  17/07/2025 11:11
 **/

#include "iostream"
#include "cmath"
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--)
    {
        long long n;
        cin >> n;

        long long powerOf2 = (long long)round(log2(n));
        if ((1LL << powerOf2) == n)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
    return 0;
}
