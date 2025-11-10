/**
*   author:   @fardinkamal62
*   created:  09/01/2025 07:06
**/

#include "iostream"
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--) {
        int x;
        cin >> x;

        int a, b, c;
        cin >> a >> b >> c;

        bool can_unlock_door_1 = false;
        bool can_unlock_door_2 = false;
        bool can_unlock_door_3 = false;

        int key = x;
        for (int i = 0; i < 4; i++) {
            if (key == 1) {
                can_unlock_door_1 = true;
                key = a;
            }
            if (key == 2) {
                can_unlock_door_2 = true;
                key = b;
            }
            if (key == 3) {
                can_unlock_door_3 = true;
                key = c;
            }
        }


        if (can_unlock_door_1 && can_unlock_door_2 && can_unlock_door_3) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
