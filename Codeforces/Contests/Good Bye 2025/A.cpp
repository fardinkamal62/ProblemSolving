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
        string s;
        cin >> s;
        
        ll count_y = 0;
        for (char c : s)
        {
            if (c == 'Y')
                count_y++;
        }
        
        if (count_y <= 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    
    return 0;
}