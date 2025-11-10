/**
*   author:   @fardinkamal62
**/

#include<bits/stdc++.h>
using namespace std;

long long reverseBinary(long long x) {
    long long result = 0;
    long long temp = x;
    int bits = 0;
    
    while (temp > 0) {
        bits++;
        temp >>= 1;
    }
    
    for (int i = 0; i < bits; i++) {
        if (x & (1LL << i)) {
            result |= (1LL << (bits - 1 - i));
        }
    }
    
    return result;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    unordered_set<long long> possible;
    for (long long x = 1; x <= (1 << 20); x++) {
        possible.insert(x ^ reverseBinary(x));
    }
    
    int tt;
    cin >> tt;
    
    while (tt--) {
        long long n;
        cin >> n;
        
        if (possible.count(n)) {
            cout << "YES\n";
            continue;
        }
        
        bool found = false;
        for (int len = 21; len <= 30 && !found; ++len) {
            long long start = 1LL << (len - 1);
            long long end = min(start + (1LL << 16), (1LL << len) - 1); // Check a subset for each length
            
            for (long long x = start; x <= end && !found; ++x) {
                if ((x ^ reverseBinary(x)) == n) {
                    found = true;
                    break;
                }
            }
        }
        
        cout << (found ? "YES\n" : "NO\n");
    }
    
    return 0;
}