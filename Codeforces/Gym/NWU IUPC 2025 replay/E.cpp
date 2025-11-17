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
        ll k;
        cin >> k;
        
        ll count = 0;
        ll limit = (ll)sqrt(k) + 1;
        
        for (ll x = -limit; x <= limit; x++)
        {
            for (ll y = -limit; y <= limit; y++)
            {
                if (x * x + y * y <= k)
                {
                    count++;
                }
            }
        }
        
        cout << count << endl;
    }

    return 0;
}