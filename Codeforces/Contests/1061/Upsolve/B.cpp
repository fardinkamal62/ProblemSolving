#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if (!(cin >> t))
        return 0;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;
        bool hasB = false;
        for (char c : s)
            if (c == 'B')
            {
                hasB = true;
                break;
            }
        for (int _ = 0; _ < q; ++_)
        {
            long long a;
            cin >> a;
            if (!hasB)
            {
                // All 'A': subtract 1 per second
                cout << a << '\n';
                continue;
            }
            long long ans = 0;
            long long x = a;
            while (x > 0)
            {
                for (int i = 0; i < n; ++i)
                {
                    if (s[i] == 'A')
                        x -= 1;
                    else
                        x >>= 1;
                    ++ans;
                    if (x == 0)
                        break;
                }
            }
            cout << ans << '\n';
        }
    }
    return 0;
}
