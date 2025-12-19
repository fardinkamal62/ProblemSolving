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

        int count = 0;
        
        vector<string> patterns = {"mapie", "pie", "map"};
        
        for (const string& pattern : patterns)
        {
            size_t pos = 0;
            while ((pos = s.find(pattern, pos)) != string::npos)
            {
                s[pos + pattern.length() / 2] = '?';
                count++;
            }
        }
        
        cout << count << endl;
    }
    
    return 0;
}