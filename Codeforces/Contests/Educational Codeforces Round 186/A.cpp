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
        int n;
        cin >> n;

        string s;
        cin >> s;

        bool has2026 = (s.find("2026") != string::npos);
        
        bool has2025 = (s.find("2025") != string::npos);
        
        int ans = 0;
        if (!has2026 && has2025) {
            ans = 1;
        }
        
        cout << ans << endl;
    }
    
    return 0;
}