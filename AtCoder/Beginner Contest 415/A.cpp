#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, x;
    string s;
    bool found = false;

    cin >> n >> x >> s;

    for (int i = 0; i < n; i++) {
        // split the string into numbers divided by space
        if (s[i] == ' ') {
            continue;
        }
        int num = 0;
        while (i < n && s[i] != ' ') {
            num = num * 10 + (s[i] - '0');
            i++;
        }
        if (num == x) {
            found = true;
            break;
        }
    }

    if (found) {
        cout << "Found" << endl;
    } else {
        cout << "Not Found" << endl;
    }

    return 0;
}
