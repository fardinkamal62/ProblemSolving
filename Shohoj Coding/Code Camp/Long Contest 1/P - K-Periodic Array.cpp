#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main()
{
    fastIO();

    int n, k, ans = 0;
    cin >> n >> k;
    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < k; i++)
    {
        int t = 0;
        for (int j = i; j < n; j += k)
            if (a[j] == 1)
                t++;
        ans += min(t, n / k - t);
    }
    cout << ans << endl;

    return 0;
}