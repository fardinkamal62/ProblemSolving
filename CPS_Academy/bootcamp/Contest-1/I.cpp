#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    cout << fixed << setprecision(0) << pow(a, b) + pow(b, a) << endl;
    return 0;
}
