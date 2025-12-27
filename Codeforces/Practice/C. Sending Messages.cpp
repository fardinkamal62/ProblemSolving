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
        int n, f, a, b;
        cin >> n >> f >> a >> b;

        long long need = 0;
        int last = 0;

        for (int i = 0; i < n; i++)
        {
            int m;
            cin >> m;

            need += std::min(1LL * b, 1LL * (m - last) * a);
            last = m;
        }
        if (need < f)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}