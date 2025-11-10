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

    double res = log2(n);
    if (res != (long long)res)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;

    return 0;
}