#include <iostream>
using namespace std;

int main() {
    int n, a;
    cin >> n >> a;

    int ones_needed = n % 500;
    
    if (ones_needed <= a) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}