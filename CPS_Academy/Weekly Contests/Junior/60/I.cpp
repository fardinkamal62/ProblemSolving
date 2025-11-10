/**
*   author:   @fardinkamal62
**/

#include<bits/stdc++.h>
using namespace std;

long long calculateMEX(vector<long long> &triplet) {
    set<long long> elements(triplet.begin(), triplet.end());
    long long mex = 0;
    while (elements.contains(mex)) mex++;
    return mex;
}

int main() {
#ifdef ONLINEJUDGE
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif


    long long n;
    cin >> n;

    vector<long long> v(n);
    int missing = 0;
    vector<int> missing_locations(missing);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] == 0) {
            missing++;
            missing_locations.push_back(i);
        }
    }

    for (int i = 0; i < missing; i++) {
        v[missing_locations.back()] = calculateMEX(v);
        missing_locations.pop_back();
    }

    for (int i = 0; i < n; i++) cout << v[i] << " ";
    cout << endl;

#ifdef ONLINEJUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

    return 0;
}
