#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;

    while (tt--)
    {
        long long x, k;
        cin >> k >> x;

        for (int i = 0; i < k; i++)
        {
            x *= 2;
        }
        cout << x << "\n";
    }

    return 0;
}