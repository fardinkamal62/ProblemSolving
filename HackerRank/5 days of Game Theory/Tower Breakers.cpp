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
        int n, m;
        cin >> n >> m;
        if (m == 1 || n % 2 == 0)
            cout << "2\n";
        else
            cout << "1\n";
    }

    return 0;
}