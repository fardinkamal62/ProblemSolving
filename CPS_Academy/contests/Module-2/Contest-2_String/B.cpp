/**
 *   author:   @fardinkamal62
 **/

#include "iostream"
#include "string"

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

    string s;
    cin >> s;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'a' && s[i - 1] == 'n') cout << "ya";
        else cout << s[i];
    }
    


#ifdef ONLINEJUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);
#endif

    return 0;
}
