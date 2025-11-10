/**
*   author:   @fardinkamal62
* 	Solution from editorial
**/

#include<bits/stdc++.h>
using namespace std;

int main() {
#ifdef ONLINEJUDGE
	clock_t tStart = clock();
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, m;
	string s, t;
	cin >> n >> m >> s >> t;

	vector<int> diff(n + 1, 0);

	for (int i = 0; i < m; ++i) {
		int l, r;
		cin >> l >> r;
		diff[l - 1] += 1;
		if (r < n) diff[r] -= 1;
	}

	int current = 0;
	for (int i = 0; i < n; ++i) {
		current += diff[i];
		if (current % 2 == 0) cout << s[i];
		else cout << t[i];
	}
	cout << "\n";

#ifdef ONLINEJUDGE
	fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

	return 0;
}
