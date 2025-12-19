/**
*   author:   @fardinkamal62
*   created:  19/12/24 21:42
**/

#include "iostream"
#include "vector"
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<char> str;
    string s;
    cin >> s;

    char last_char = s[0];
    int last_char_count = 1;
    for (int i = 1; i < s.length(); i++) {
        if (s[i] == last_char) {
            last_char_count++;
            // continue;
        }
        else {
            last_char_count = 1;
            last_char = s[i];
        }
        if (last_char_count < 2) {
            str.push_back(last_char);
        }
        // str.push_back(s[i]);
        // last_char = s[i];
    }

    for (auto c : str) {
        cout << c;
    }
    return 0;
}
