#include <iostream>
using namespace std;


void solve() {
    int n, a, b;

    cin >> n >> a >> b;

    const int target_cords_x = a;
    const int target_cords_y = b;

    int current_cords_x = 0;
    int current_cords_y = 0;

    string moves;

    cin >> moves;

    int max = 100;
    while (--max) {
        for (int i = 0; i < n; i++) {
            if (moves[i] == 'N') {
                current_cords_y++;
            } else if (moves[i] == 'E') {
                current_cords_x++;
            } else if (moves[i] == 'S') {
                current_cords_y--;
            } else if (moves[i] == 'W') {
                current_cords_x--;
            }

            if (current_cords_x == target_cords_x && current_cords_y == target_cords_y) {
                cout << "YES" << endl;
                return;
            }
        }
    }

    cout << "NO" << endl;
}

int main() {
    int tests;

    cin >> tests;

    while(tests--) {
        solve();
    }
}
