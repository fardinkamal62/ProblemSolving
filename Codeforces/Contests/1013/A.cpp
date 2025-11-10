/**
*   author:   @fardinkamal62
*   created:  25/03/2025 20:35
**/

#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--) {
        int zeros = 3, ones = 1, twos = 2, threes = 1, fives = 1;
        int n;
        int count = 0;
        bool found = false;

        cin >> n;

        for (int i = 0; i < n; i++) {
            int number;
            cin >> number;

            // Process the current digit
            if (number == 0 && zeros > 0) zeros--;
            else if (number == 1 && ones > 0) ones--;
            else if (number == 2 && twos > 0) twos--;
            else if (number == 3 && threes > 0) threes--;
            else if (number == 5 && fives > 0) fives--;

            count++;  // Increment count after processing

            // Check if all required digits are met after processing
            if (zeros <= 0 && ones <= 0 && twos <= 0 && threes <= 0 && fives <= 0) {
                found = true;
                break;
            }
        }

        if (found) {
            cout << count << "\n";
        } else {
            cout << "0\n";
        }
    }
    return 0;
}
