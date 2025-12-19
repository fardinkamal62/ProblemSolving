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
        ll n;
        cin >> n;
        string s;
        cin >> s;
        
        ll dashes = 0, underscores = 0;
        for (char c : s)
        {
            if (c == '-') dashes++;
            else underscores++;
        }
        
        if (dashes < 2 || underscores < 1)
        {
            cout << 0 << endl;
            continue;
        }
        
        ll before = dashes / 2;
        ll after = dashes - before;
        ll result = before * underscores * after;
        
        cout << result << endl;
    }
    
    return 0;
}