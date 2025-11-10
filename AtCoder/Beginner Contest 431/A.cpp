/**
*   author:   @fardinkamal62
**/

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll h, b;
    cin >> h >> b;

    if (b >= h) {
        cout << 0 << endl;
        return 0;
    }

    cout << h - b << endl;
    
    return 0;
}
