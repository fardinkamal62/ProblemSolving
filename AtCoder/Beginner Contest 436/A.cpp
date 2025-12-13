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
    
    ll length;
    cin >> length;

    string s;
    cin >> s;

    for (ll i = 0; i < (length - s.size()); i++) cout << 'o';
    
    cout << s << endl;
    
    return 0;
}