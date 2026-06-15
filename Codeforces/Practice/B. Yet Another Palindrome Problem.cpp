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

        for (int i = 0; i < n; i++)
            cin >> a[i];

        bool found = false;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j + 1 < i; j++)
            {
                if (a[i] == a[j])
                {
                    cout << "YES\n";
                    found = true;
                    break;
                }
            }
            if (found)
                break;
        }

        if (!found)
            cout << "NO\n";
    }

    return 0;
}