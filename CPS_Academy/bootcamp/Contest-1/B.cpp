#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    cout << fixed << setprecision(5) << a / b << " " << a % b << " " << (double)a / b << endl;
    return 0;
}
