/**
*   author:   @fardinkamal62
**/

#include<bits/stdc++.h>
using namespace std;

int main() {
#ifdef ONLINEJUDGE
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int tt;
    cin >> tt;

    while (tt--) {
        int s;
        long long result = 0;
        cin >> s;

        vector<long long>a(s),b(s);

        for(int i=0;i<s;i++) cin>>a[i];

        for(int i=0;i<s;i++) cin>>b[i];

        for(int i=0;i<s;i++) if(a[i]>b[i]) result += a[i]-b[i];

        cout << result+1 << '\n';
    }

#ifdef ONLINEJUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

    return 0;
}
