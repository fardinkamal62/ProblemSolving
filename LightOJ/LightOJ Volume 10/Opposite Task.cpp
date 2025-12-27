#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    cin >> tt;
    
    while(tt--)
    {
        int n;
        cin >> n;
        
        if (n > 10) cout << "10 " << n - 10 << "\n";
        else cout << "0 " << n << "\n";
    }
    return 0;
}
