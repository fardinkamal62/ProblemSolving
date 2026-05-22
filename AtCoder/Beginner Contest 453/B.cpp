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

    ll t, x, last_saved = -1;

    ll temp;
    cin >> t >> x >> temp;
    last_saved = temp;          

    cout << 0 << " " << temp << endl;

    for (int i = 1; i <= t; i++)
    {
        ll temp;
        cin >> temp;

        if ((temp - last_saved) >= x || (last_saved - temp) >= x)
        {
            cout << i << " " << temp << endl;
            last_saved = temp;
        }
    }

    return 0;
}