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

    ll tt, init_max = 0, maximum = 0;
    cin >> tt;

    while (tt--)
    {
        ll up, down;
        cin >> down >> up;
        init_max = (init_max + up) - down;

        if (init_max > maximum)
        {
            maximum = init_max;
        }
    }
    cout << maximum << endl;

    return 0;
}