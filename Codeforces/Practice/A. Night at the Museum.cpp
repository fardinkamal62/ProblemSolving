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
    
    string s;
    cin >> s;

    int current = 97, result = 0;

    for (int i = 0; i < (int)s.size(); ++i)
    	result += min((((int) s[i] - current + 26) % 26), ((current - (int) s[i]+ 26) % 26 )), current = (int) s[i];

    cout << result << endl;

    
    return 0;
}