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

        vector<bool> deleted(s.length(), false);
        vector<ll> lowercases;
        vector<ll> uppercases;

        for (ll i = 0; i < s.length(); i++)
        {
            if (s[i] == 'b')
            {
                if (!lowercases.empty())
                {
                    deleted[lowercases.back()] = true;
                    lowercases.pop_back();
                }
                deleted[i] = true;
            }
            else if (s[i] == 'B')
            {
                if (!uppercases.empty())
                {
                    deleted[uppercases.back()] = true;
                    uppercases.pop_back();
                }
                deleted[i] = true;
            }
            else if (islower(s[i]))
            {
                lowercases.push_back(i);
            }
            else
            {
                uppercases.push_back(i);
            }
        }

        string result = "";
        for (ll i = 0; i < s.length(); i++)
        {
            if (!deleted[i])
            {
                result += s[i];
            }
        }

        cout << result << endl;
    }

    return 0;
}