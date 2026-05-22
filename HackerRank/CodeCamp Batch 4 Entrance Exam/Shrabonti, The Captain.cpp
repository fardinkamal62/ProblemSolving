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
    
    ll n, k;
    while (cin >> n >> k)
    {
        if ((k - 1) % n == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    
    return 0;
}