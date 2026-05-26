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

    int cnt[5]{};
    int n;
    cin >> n;

    while (n--)
    {
        int x;
        cin >> x;
        cnt[x]++;
    }

    int ans = 0;
    ans += cnt[4];
    ans += cnt[3];

    cnt[1] = max(0, cnt[1] - cnt[3]);
    ans += cnt[2] / 2;
    cnt[2] %= 2;
    cnt[1] += 2 * cnt[2];
    ans += (cnt[1] + 3) / 4;
    cout << ans << endl;

    return 0;
}