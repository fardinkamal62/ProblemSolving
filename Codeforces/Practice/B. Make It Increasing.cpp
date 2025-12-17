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

    ll tt;
    cin >> tt;

    while (tt--)
    {
        int n;
        cin >> n;

        vector<int> a(n);

        for (auto &i : a)
            cin >> i;

        int ans = 0;
        bool possible = true;

        for (int i = n - 2; i >= 0; i--)
        {
            while (a[i] >= a[i + 1] && a[i] > 0)
            {
                a[i] /= 2;
                ans++;
            }
            if (a[i] >= a[i + 1])
            {
                cout << -1 << endl;
                possible = false;
                break;
            }
        }
        if (possible)
            cout << ans << endl;
    }

    return 0;
}