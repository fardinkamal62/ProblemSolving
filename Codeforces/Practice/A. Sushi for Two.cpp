#include<bits/stdc++.h>
using namespace std;

int main() {
#ifdef ONLINEJUDGE
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    
    vector<int> groups;
    int count = 1;
    
    for (int i = 1; i < n; i++) {
        if (a[i] == a[i - 1]) {
            count++;
        } else {
            groups.push_back(count);
            count = 1;
        }
    }
    groups.push_back(count);
    
    int max_length = 0;
    for (int i = 0; i < groups.size() - 1; i++) {
        int valid_length = 2 * min(groups[i], groups[i + 1]);
        max_length = max(max_length, valid_length);
    }
    
    cout << max_length << endl;


#ifdef ONLINEJUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}