//
// Created by Fardin Kamal on 15/12/24.
//

#include "iostream"

using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        string c;
        cin >> c;

        for (int j = c.length(); j > -1; j--) {
            if (c[j] == 'p') cout << 'q';
            if (c[j] == 'q') cout << 'p';
            if (c[j] == 'w') cout << 'w';
        }
        cout << "\n";
    }
}
