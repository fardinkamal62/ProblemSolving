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
        int n;
        cin >> n;
        string s;
        cin >> s;

        string res = "";
        while (!s.empty())
        {
            int x;
            if (s.back() == 'a' || s.back() == 'e')
            {
                x = 2;
            }
            else
            {
                x = 3;
            }

            while (x--)
            {
                res += s.back();
                s.pop_back();
            }
            res += '.';
        }
        res.pop_back();
        reverse(res.begin(), res.end());
        cout << res << '\n';
    }

    return 0;
}