/**
*   author:   @fardinkamal62
*   created:  19/12/24 21:42
**/

#include "iostream"
#include "vector"
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;

    while (tt--) {
        int numbers;
        cin >> numbers;
        vector<int> mex(numbers, 0);
        int smallest = numbers;
        int zeros = 0;

        int count = numbers;
        while (count--) {
            int number;
            cin >> number;

            // if (number <= numbers) {
            //     mex[number] = 1;
            // }

            if (number == 0) {
                zeros += 1;
                if (smallest == numbers) {
                    smallest = numbers - count - 1;
                }
            }
        }

        if (numbers == zeros) {
            cout << 0 << "\n";
        } else {
            if (smallest == 0 || smallest == numbers - 1 || zeros == 0) {
                cout << 1 << "\n";
            } else {
                cout << 2 << "\n";
            }
        }
    }

    return 0;
}
