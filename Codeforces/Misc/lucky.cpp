#include <iostream>
using namespace std;

int main() {
    int tests, number_1, number_2, number_3, number_4, number_5, number_6;

    std::cin >> tests;
    for (int i = 0; i < tests; i++)
    {
        int number;
        std::cin >> number;

        std::cout << (number % 2 == 0 ? "YES" : "NO") << std::endl;
    }

}
