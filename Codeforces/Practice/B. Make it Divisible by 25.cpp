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
        string n;
        cin >> n;
        
        vector<string> targets = {"00", "25", "50", "75"};
        int minDeletions = INT_MAX;
        
        for (const string& target : targets)
        {
            int len = n.length();
            int deletions = 0;
            int pos = len - 1;
            
            while (pos >= 0 && n[pos] != target[1])
            {
                deletions++;
                pos--;
            }
            
            if (pos < 0) continue;
            
            pos--;
            
            while (pos >= 0 && n[pos] != target[0])
            {
                deletions++;
                pos--;
            }
            
            if (pos < 0) continue;
            
            minDeletions = min(minDeletions, deletions);
        }
        
        cout << minDeletions << endl;
    }
    
    return 0;
}