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

    ll n, total_sum = 0;
    cin >> n;

    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i], total_sum += a[i];

    if (total_sum == 0)
    {
        int i;
        for (i = 0; i < n; i++)
        {
            if (a[i] != 0)
                break;
        }

        if (i == n)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            cout << 2 << endl;
            cout << "1 " << i + 1 << endl
                 << i + 2 << " " << n;
        }
    }

    else
    {
        cout << "YES" << endl
             << "1 \n1 " << n;
    }

    return 0;
}