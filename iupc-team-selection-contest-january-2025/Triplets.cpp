/**
*   author:   @fardinkamal62
*   created:  10/01/2025 08:20
**/

#include "iostream"
#include "set"
using namespace std;

int fact(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * fact(n - 1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;

    set<int> n_set;
    for (int i = 0; i < tt; i++) {
        int input;
        cin >> input;
        n_set.insert(input);
    }

    int n = n_set.size();
    int r = 3;
    cout << fact(n) / (fact(r) * fact(n-r)) << "\n";
    return 0;
}
