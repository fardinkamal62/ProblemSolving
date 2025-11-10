#include <iostream>
using namespace std;


int length(char x, char y) {
        if (x > y) swap(x, y);
        return y - x == 1 or y - x == 4;
}


int main() {
    char s1,s2,t1,t2;
    cin >> s1 >> s2 >> t1 >> t2;

    if (length(s1, s2) == length(t1, t2)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
