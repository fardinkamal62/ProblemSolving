#include <iostream>
using namespace std;


int main() {
    int number, result = 1;
    cin >> number;

    while (number > 0) {
        int digit = number % 10;
        result *= digit;
        number /= 10;
    }
    cout << result;

    return 0;
}
