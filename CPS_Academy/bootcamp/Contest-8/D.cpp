#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int ,int> a,pair<int ,int> b)
{
    return (a.first<b.first) || ((a.first == b.first)&& (a.second > b.second));
}

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
	while (tt--)
	{
		int n;
        cin >> n;
        vector< pair<int,int> > v;
        int a,b;
        for(int i=0;i<n;i++) {
            cin >> a >> b;
            v.push_back(make_pair(a,b));
        }
        sort(v.begin(),v.end());
        sort(v.begin(),v.end(),cmp);
        for(int i=0;i<n;i++)
            printf("%d %d\n",v[i].first,v[i].second);
	}


#ifdef ONLINEJUDGE
	fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

	return 0;
}
