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

	vector<int> v;
	while (tt--)
	{
		int a, x;
		cin >> a;

		if (a == 1) {
			cin >> x;
			v.push_back(x);
			sort(v.begin(), v.end());
		}

		if (a == 2) {
			cout << v[0] << '\n';
			v.erase(v.begin());
		}
	}


#ifdef ONLINEJUDGE
	fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

	return 0;
}
