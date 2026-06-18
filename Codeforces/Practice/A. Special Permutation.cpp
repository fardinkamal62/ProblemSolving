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

        for (int i = 0; i < n; i++)
        {
            cout << (i + 1) % n + 1 << " ";
        }
        cout << endl;
    }

    return 0;
}