#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;

    map<string, int> mp;

    while (tt--)
    {
        string s;
        cin >> s;

        mp[s]++;
        // for (char c : s)
        // {
        //     mp[c]++;
        // }
    }

    int max_val = -1;
    for (auto it : mp)
    {
        max_val = max(max_val, it.second);
    }

    for (auto it : mp)
    {
        if (it.second == max_val)
        {
            cout << it.first;
            break;
        }
    }

    cout << endl;
    return 0;
}