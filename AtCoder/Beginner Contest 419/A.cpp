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

   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   string s;
   cin >> s;

   if (s == "red") cout << "SSS" << '\n';
   else if (s == "blue") cout << "FFF" << '\n';
   else if (s == "green") cout << "MMM" << '\n';
   else cout << "Unknown" << '\n';

#ifdef ONLINEJUDGE
   fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

   return 0;
}
