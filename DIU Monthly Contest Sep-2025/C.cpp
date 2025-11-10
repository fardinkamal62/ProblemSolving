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
        long long n, result = 0;
        cin >> n;

        while (n != 0)
        {
            result += n % 10;
            n /= 10;
        }

        if (result & 1){
             cout << "Odd" << endl;
            }
        else cout << "Even" << endl;
    }

    return 0;
}
