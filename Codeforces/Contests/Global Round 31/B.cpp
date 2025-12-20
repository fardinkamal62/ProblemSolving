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
        
        vector<string> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        
        string s = "";
        
        for (int i = 0; i < n; i++)
        {
            string option1 = a[i] + s;
            string option2 = s + a[i];
            
            if (option1 < option2) s = option1;
            else s = option2;
        }
        
        cout << s << endl;
    }
    
    return 0;
}