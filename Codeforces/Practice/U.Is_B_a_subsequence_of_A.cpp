/**
*   author:   @fardinkamal62
**/

#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;
    vector<long long> a(n), b(m);

    for (long long i = 0; i < n; i++) cin >> a[i];
    for (long long i = 0; i < m; i++) cin >> b[i];
    
    long long index = 0;
    for (long long i = 0; i < n && index < m; i++) {
        if (a[i] == b[index]) {
            index++;
        }
    }
    if (index == m) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;
}
