#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll tt;
    cin >> tt;

    ll result = 0;
    
    for (int i = 0; i < tt - 1; i++)
    {
        ll n;
        cin >> n;
        result += n;
    }

    cout << (tt * (tt + 1)) / 2 - result << endl;
    

    return 0;
}
