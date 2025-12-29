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
    int h = 0;

    cout << s[0] << s[1] << s[2] << endl;
    for (int i = 3; i < s.size(); i += 3)
    {
        if (s[i + 1] != '/')
        {
            h++;
            for (int j = 0; j < h; j++)
            {
                cout << "  ";
            }
            cout << s[i] << s[i + 1] << s[i + 2] << "\n";
        }
        else
        {
            for (int j = 0; j < h; j++)
            {
                cout << "  ";
            }
            h--;
            cout << s[i] << s[i + 1] << s[i + 2] << s[i + 3] << "\n";
            i++;
        }
    }

    return 0;
}