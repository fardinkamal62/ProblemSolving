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
        ll n;
        cin >> n;

        vector<int> a(n), b(n), c(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        for (int i = 0; i < n; i++)
            cin >> c[i];

        vector<bool> ab(n, true), bc(n, true);

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[j] >= b[(j + i) % n])
                {
                    ab[i] = false;
                    break;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (b[j] >= c[(j + i) % n])
                {
                    bc[i] = false;
                    break;
                }
            }
        }

        long long count_ab = 0, count_bc = 0;
        for (int i = 0; i < n; i++)
        {
            if (ab[i])
                count_ab++;
            if (bc[i])
                count_bc++;
        }

        cout << n * count_ab * count_bc << endl;
    }

    return 0;
}