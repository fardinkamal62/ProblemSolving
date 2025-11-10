//
// Created by Fardin Kamal on 15/12/24.
//

#include "iostream"

using namespace std;
int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    cin >> t;

    for (int i = 0; i<t; i++) {
        cin >> n;
        cout << n -1 << "\n";
    }
}
