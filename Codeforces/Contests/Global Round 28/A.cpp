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
        int x;
        cin >> x;

        if (x % 33 == 0) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
}
