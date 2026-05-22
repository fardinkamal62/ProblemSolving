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

int main()
{
    fastIO();
    
    ll tt;
    cin >> tt;
    
    while (tt--)
    {
        string token;
        cin >> token;

        ll charge = 0, ans = 0;
        for (char c : token)
        {
            if (c >= '0' && c <= '9')
            {
                charge = charge * 10 + (c - '0');
            }
        }

        if (charge < 60)
        {
            ans += (60 - charge) * 1;
            charge = 60;
        }

        if (charge < 80)
        {
            ans += (80 - charge) * 2;
            charge = 80;
        }

        if (charge < 100)
        {
            ans += (100 - charge) * 3;
        }

        cout << ans << " minutes" << endl;
    }
    
    return 0;
}