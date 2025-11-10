/**
*   author:   @fardinkamal62
**/

#include<bits/stdc++.h>
using namespace std;

int main() {
    // #ifdef ONLINEJUDGE
    //     clock_t tStart = clock();
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

    string s, t;
    cin >> s >> t;

    int s_hour = stoi(s.substr(0, 2));
    int s_min = stoi(s.substr(3, 2));
    int t_hour = stoi(t.substr(0, 2));
    int t_min = stoi(t.substr(3, 2));

    int sub_min = s_min - t_min;
    int sub_hour = s_hour - t_hour;

    if (sub_min < 0) {
        sub_min += 60;
        sub_hour--;
    }
    if (sub_hour < 0) {
        sub_hour += 24;
    }
    printf("%02d:%02d\n", sub_hour, sub_min);
    // #ifdef ONLINEJUDGE
    //     fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
    // #endif
    //
    return 0;
}
