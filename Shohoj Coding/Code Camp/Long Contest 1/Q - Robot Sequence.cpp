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

    int n;
    string s;
    int h[1000], v[1000];
    ll ans = 0;
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        h[i] = !i ? 0 : h[i - 1];
        v[i] = !i ? 0 : v[i - 1];
        if (s[i] == 'U')
            v[i]++;
        else if (s[i] == 'D')
            v[i]--;
        else if (s[i] == 'R')
            h[i]++;
        else if (s[i] == 'L')
            h[i]--;

        for (int j = 0; j < i; j++)
        {
            if (h[i] == h[j] && v[i] == v[j])
                ans++;
        }
        if (!h[i] && !v[i])
            ans++;
    }
    cout << ans << endl;

    return 0;
}