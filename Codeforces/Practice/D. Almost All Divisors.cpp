/**
*   author:   @fardinkamal62
*   problem link: https://codeforces.com/problemset/problem/1165/D
**/

#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

int findVectorLCM(const vector<int>& nums) {
    int result = nums[0];
    for (size_t i = 1; i < nums.size(); i++) {
        result = lcm(result, nums[i]);
    }
    return result;
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

        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        cout << findVectorLCM(v) << endl;
    }

#ifdef ONLINEJUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

    return 0;
}
