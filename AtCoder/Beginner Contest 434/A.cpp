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
    
    ll w, b;
    cin >> w >> b;
    w *= 1000;

    cout << (w / b) + 1 << endl;
    
    return 0;
}