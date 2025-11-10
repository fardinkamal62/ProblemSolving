/**
 *   author:   @fardinkamal62
 **/

#include "iostream"
#include "string"
#include "vector"
using namespace std;

int main()
{
#ifdef ONLINEJUDGE
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<string> s(n);
    for (int i = 0; i < n; i++) cin >> s[i];

    for (int i = n - 1; i >= 0; i--) cout << s[i] << "\n";

#ifdef ONLINEJUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);
#endif

    return 0;
}
