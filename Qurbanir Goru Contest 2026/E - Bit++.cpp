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

    int res = 0;
    while (tt--)
    {
        string s;
        cin >> s;

        if (s == "++X" || s == "X++")
            res++;
        else if (s == "--X" || s == "X--")
            res--;

    }
    cout << res << endl;

    return 0;
}