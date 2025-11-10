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


    long long highest = -1;
    int highest_index = -1;
    long long second_highest = -1;
    int second_highest_index = -1;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        long long a;
        cin >> a;


        if (a > highest) {
            second_highest = highest;
            second_highest_index = highest_index;

            highest = a;
            highest_index = i;
        }
        else if (a > second_highest && a != highest) {
            second_highest = a;
            second_highest_index = i;
        }
    }

    cout << (highest_index + 1) << " " << second_highest << endl;


#ifdef ONLINEJUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

    return 0;
}
