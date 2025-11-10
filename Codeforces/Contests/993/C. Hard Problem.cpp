//
// Created by Fardin Kamal on 15/12/24.
//

#include "iostream"
#include "math.h"

using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        long long int result = 0;
        long long int m, a, b, c;
        cin >> m >> a >> b >> c;

        long long int firstRow = m;
        long long int secondRow = m;

        firstRow = firstRow - a;
        if (firstRow <= 0) result += m;
        else {
            result += a;

            int seat = firstRow - c;
            if (seat <= 0) {
                result += c - abs(seat);
                c -= c-abs(seat);
            }
            else {
                result += c;
                c = 0;
            }
        }
        secondRow = secondRow - b;
        if (secondRow <= 0) result += m;
        else {
            result += b;

            int seat = secondRow - c;
            if (seat <= 0) result += c - abs(seat);
            else {
                result += c;
            }
        }

        cout << result << "\n";
    }
}
