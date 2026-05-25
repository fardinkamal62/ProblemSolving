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

    ll n, k, t;
    cin >> n >> k >> t;

    int total = t * n * k / 100;
    ll whole_part = total / k;
    ll remainder = total % k;

    for (int i = 0; i < whole_part; i++)
    {
        cout << k << " ";
    }

    if (whole_part < n)
    {
        cout << remainder << " ";

        for (int i = whole_part + 1; i < n; i++)
        {
            cout << 0 << " ";
        }
    }

    cout << endl;
    return 0;
}
