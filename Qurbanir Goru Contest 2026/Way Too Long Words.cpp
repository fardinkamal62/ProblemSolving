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
        string s;
        cin >> s;

        if (s.size() > 10)
            cout << s[0] << s.size() - 2 << s[s.size() - 1] << endl;
        else
            cout << s << endl;
    }

    return 0;
}