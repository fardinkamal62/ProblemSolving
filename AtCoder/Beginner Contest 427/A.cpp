/**
*   author:   @fardinkamal62
**/

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int mid = floor(s.size() / 2);

    for (int i = 0; i < s.size(); i++)
    {
        if (i == mid) {
            continue;
        }
        cout << s[i];
    }
    cout << "\n";
    
    return 0;
}
