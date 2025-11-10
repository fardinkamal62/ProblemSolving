#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    size_t n, m;
    cin >> n >> m;

    vector<int> a(m);

    for (size_t i = 0; i < m; i++) {
        cin >> a[i];
    }

    if (a.size() == n) {
        cout << 0;
        cout << "\n\n";
        return 0;
    }

    for (size_t i = 1; i <= n; i++) {
        if (find(a.begin(), a.end(), i) == a.end()) cout << i << " ";
    }

    return 0;
}
