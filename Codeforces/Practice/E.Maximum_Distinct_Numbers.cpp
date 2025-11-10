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

    for (long long i = (n / 2) + 1; i >= 1; i--)
    {
        long long sum = (i * (i + 1)) / 2;
        if (sum <= n)
            cout << i << endl, i = 0;
    }
    

    return 0;
}


// TODO: Not solved yet. Review later.