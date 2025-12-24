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
        
        cout << s[s.size() - 1] << s.substr(1) << endl;
    }
    
    return 0;
}