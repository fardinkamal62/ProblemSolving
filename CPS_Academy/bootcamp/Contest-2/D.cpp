#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    int smallest = min(a, min(b, c));
    int largest = max(a, max(b, c));
    int middle = a + b + c - smallest - largest;
    cout << smallest << " " << middle << " " << largest << endl;
    return 0;
}