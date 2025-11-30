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
        int ans = 0;
        string s;
        cin >> s;

        char curr_num = s[0];
        bool zero_found = false;
        bool one_found = false;

        if (curr_num == '0')
            zero_found = true;
        else
            one_found = true;

        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] != curr_num)
            {
                if (s[i] == '0')
                    zero_found = true;
                else
                    one_found = true;

                if (zero_found && one_found)
                {
                    ans++;
                }

                curr_num = s[i];
            }
        }
        cout << ans << endl;
    }

    return 0;
}