/**
*   author:   @fardinkamal62
**/

#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;

#define endl '\n';


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long tt;
    cin >> tt;

    while (tt--) {
        long long a, b;
        cin >> a >> b;

        long long first = (a - 1) * (a) / 2;
        // cout << "First: " << first << endl;
        long long second = (b) * (b + 1) / 2;
        // cout << "Second: " << second << endl;

        cout << second - first << endl;
    }

    return 0;
}
