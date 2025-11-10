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
   int tt;
   cin >> tt;

   set<string> leaves;
   while (tt--)
   {
      string leaf, color;
      cin >> leaf >> color;

      leaves.insert(leaf + " " + color);
   }

   cout << leaves.size() << '\n';


#ifdef ONLINEJUDGE
   fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

   return 0;
}
