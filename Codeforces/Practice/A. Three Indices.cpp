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

        for (int i = 0; i < n; ++i)
            cin >> a[i];

        bool found = false;
        for (int i = 1; i < n - 1; ++i)
        {
            if (a[i] > a[i - 1] && a[i] > a[i + 1])
            {
                cout << "YES" << endl;
                cout << i << ' ' << i + 1 << ' ' << i + 2 << endl;
                found = true;
                break;
            }
        }
        if (!found)
            cout << "NO" << endl;
    }

    return 0;
}