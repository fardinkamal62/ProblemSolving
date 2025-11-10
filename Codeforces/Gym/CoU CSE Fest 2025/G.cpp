
/**
*   author:   @fardinkamal62
**/

#include<bits/stdc++.h>
using namespace std;

int calculateMEX(vector<int>& triplet) {
    set<int> elements(triplet.begin(), triplet.end());
    int mex = 0;
    while (elements.count(mex)) mex++;
    return mex;
}
int main() {
#ifdef ONLINEJUDGE
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int tt;
    cin >> tt;

    while (tt--) {
        int n;
        cin >> n;

        vector<int> nums(n);
        for (int i = 0; i < n; i++) cin >> nums[i];
        cout << calculateMEX(nums) << endl;
    }

#ifdef ONLINEJUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

    return 0;
}
