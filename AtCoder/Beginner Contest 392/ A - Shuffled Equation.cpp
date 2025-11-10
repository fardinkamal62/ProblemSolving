#include "iostream"
#include "vector"
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c;

    cin >> a >> b >> c;

    if (a * b == c || a * c == b || b * c == a) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
