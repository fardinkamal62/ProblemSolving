//
// Created by Fardin Kamal on 19/12/24.
//
#include "iostream"

using namespace std;
int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    for (int i = 0; i<t; i++) {
        int n, k;
        cin >> n >> k;

        for (int j = 2; j<=n; j+=2) {
            if (j != 4) {
                cout << j << " ";
            }
        }
        cout << "4 5";

        for (int j = 0; j<=n; j+=2) {
            if (j != 5) {
                cout << " " << j;
            }
        }
        cout << "\n";
    }
}
