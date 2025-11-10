/**
*   author:   @fardinkamal62
*   created:  10/01/2025 08:09
**/

#include "iostream"
#include "vector"
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    vector<int> numbers;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;

        numbers.push_back(n);
    }

    for (int j = 0; j < t; j++) {
        if (j == 0) {
            if (numbers[0] == 1) cout << "ON" << "\n";
            else cout << "OFF" << "\n";
            continue;
        }
        if (numbers[j] % t == 0) {
            cout << "ON" << "\n";
        } else {
            if (numbers[j] == 1) {
                cout << "ON" << "\n";
            } else cout << "OFF" << "\n";
        }
    }

    return 0;
}
