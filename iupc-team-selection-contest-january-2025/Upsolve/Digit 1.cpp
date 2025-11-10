/**
*   author:   @fardinkamal62
*   created:  10/01/2025 09:42
**/

#include "iostream"
using namespace std;
#define ll long long
#define el "\n"

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--) {
        ll n;
        cin >> n;
        string s = "";
        for (ll i = 1; i <= n; i++)
        {
            s += to_string(i);
        }
        cout << s[s.size() / 2] << "\n";
    }
    return 0;
}
