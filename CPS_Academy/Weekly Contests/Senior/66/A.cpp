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
        ll n;
        cin >> n;

        ll result = 0;
        while (n)
        {
            result += n;
            if (n & 1)
            {
                n -= 1;
                n /= 2;
            }
            else
            {
                n /= 2;
            }
        }

        cout << result << endl;
    }

    return 0;
}