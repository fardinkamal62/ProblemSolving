#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    fastIO();
    
    ll tt;
    cin >> tt;
    
    while (tt--)
    {
        int n, m;
        cin >> n >> m;
        
        string x, s;
        cin >> x >> s;
        
        bool found = false;
        int operations = 0;
        
        for (int i = 0; i < 6; i++) {
            if (x.find(s) != string::npos) {
                operations = i;
                found = true;
                break;
            }
            x += x;
        }
        
        if (found) {
            cout << operations << endl;
        } else {
            cout << -1 << endl;
        }
    }
    
    return 0;
}