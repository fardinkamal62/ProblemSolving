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
        ll n, k;
        cin >> n >> k;
        
        if (n % 2 == 1)
        {
            cout << 1 << " " << (n - 1) / 2 << " " << (n - 1) / 2 << endl;
        }
        else if (n % 4 == 0)
        {
            cout << n / 4 << " " << n / 4 << " " << n / 2 << endl;
        }
        else
        {
            cout << 2 << " " << (n - 2) / 2 << " " << (n - 2) / 2 << endl;
        }
    }
    
    return 0;
}