#include <iostream>
using namespace std;

int main() {
    char a,b,c;
    int result = 0;
    cin >> a >> b >> c;

    if (a == '1') result++;
    if (b == '1') result++;
    if (c == '1') result++;

    cout << result << endl;
    return 0;
}