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

    string s;
    cin >> s;

    for (int i = 0; i < (int)s.size(); i++)
    {
        ll num = stoll(string(1, s[i]));
        if (i == 0 && num == 9)
            cout << num;
        else if (num > 4)
            cout << 9 - num;
        else
            cout << num;
    }

    return 0;
}