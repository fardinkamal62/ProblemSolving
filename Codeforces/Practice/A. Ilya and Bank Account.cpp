/**
 *   author:   @fardinkamal62
 **/

#include "iostream"
using namespace std;

#define endl '\n';

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    if (n > 0)
        cout << n << "\n";
    else
        cout << max((n / 10), (n - (n % 100) / 10) / 10) << "\n";

    return 0;
}
