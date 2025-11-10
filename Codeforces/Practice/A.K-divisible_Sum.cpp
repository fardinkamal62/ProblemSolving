#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;

    while (tt--)
    {
        double n, k;
        cin >> n >> k;
        if (n < k)
            cout << ceil(k / n) << endl;
        else
            cout << ceil(n / k) << endl;
        // cout << ceil(max(n, k) / min(n, k)) << endl;
    }

    return 0;
}