#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double r;
    cin >> r;

    double area = M_PI * r * r;
    double circumference = 2 * M_PI * r;

    cout << fixed << setprecision(6) << area << " " << circumference << endl;

    return 0;
}
