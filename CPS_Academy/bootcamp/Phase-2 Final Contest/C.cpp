#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    while (cin >> n >> m) {
        unordered_map<int, int> mp;

        for (int i = 0; i < n; i++) {
            int h;
            cin >> h;
            mp[h]++;
        }

        for (int i = 0; i < m; i++) {
            int q;
            cin >> q;
            cout << mp[q] << "\n";
            mp[q] = 0;
        }
    }
    
    return 0;
}