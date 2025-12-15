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

    for (int i = 0; i < s.size();)
    {
        bool ch = true;
        if (s[i] == '1' && s[i + 1] == '4' && s[i + 2] == '4')
        {
            ch = false;
            i += 3;
        }
        else if (s[i] == '1' && s[i + 1] == '4')
        {
            ch = false;
            i += 2;
        }
        else if (s[i] == '1')
        {
            ch = false;
            i += 1;
        }
        if (ch)
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;

    return 0;
}