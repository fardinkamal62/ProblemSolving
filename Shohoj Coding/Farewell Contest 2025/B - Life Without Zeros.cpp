#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int removeZeros(int num) {
    string s = to_string(num);
    string result;
    for (char c : s) {
        if (c != '0') {
            result += c;
        }
    }
    return result.empty() ? 0 : stoi(result);
}

int main()
{
    fastIO();

    string a, b;
    cin >> a >> b;

    int result = stoi(a) + stoi(b);

    int a_no_zeros = removeZeros(stoi(a));
    int b_no_zeros = removeZeros(stoi(b));
    int result_no_zeros = removeZeros(result);

    if (a_no_zeros + b_no_zeros == result_no_zeros) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}