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

    map<string, ll> emails;

    while (tt--)
    {
        string s;
        cin >> s;

        emails[s]++;

        if (emails[s] == 1)
            cout << "OK" << endl;
        else
            cout << s << emails[s] - 1 << endl;
    }

    return 0;
}