/**
*   author:   @fardinkamal62
**/

#include "iostream"
#include "vector"
using namespace std;

#define endl '\n'
const int MAX_X = 1e6 + 5;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> divisor_count(MAX_X + 1, 0);
    for (int i = 1; i <= MAX_X; i++) {
        for (int j = i; j <= MAX_X; j += i) {
            divisor_count[j]++;
        }
    }

    long long tt;
    cin >> tt;

    while (tt--) {
        int x;
        cin >> x;
        cout << divisor_count[x] << endl;
    }

    return 0;
}