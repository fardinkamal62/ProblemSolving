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
        int n, m;
        cin >> n >> m;
        
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        sort(a.begin(), a.end());
        long long result = 0;

        for (int i = 0; i < n - 2; i+=2) {
            cout << a[i] << " " << a[i + 1] << endl;
            if (a[i] + a[i + 1] > m) continue;
            else result++;
        }
        cout << result << endl;
    }

    return 0;
}
