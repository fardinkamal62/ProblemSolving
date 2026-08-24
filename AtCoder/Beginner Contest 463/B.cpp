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

ll charToNum(char c)
{
    if (c == 'A')
        return 0;
    else if (c == 'B')
        return 1;
    else if (c == 'C')
        return 2;
    else if (c == 'D')
        return 3;
    else if (c == 'E')
        return 4;
}

int main()
{
    fastIO();

    ll n;
    cin >> n;

    char x = ' ';
    cin >> x;

    ll index = charToNum(x);

    bool ok = false;

    for (int i = 0; i < n && !ok; i++)
    {
        string s;
        cin >> s;

        if (s[index] == 'o')
            ok = true;
    }

    if (ok)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}