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
        map<char, int> mp;
        string s;
        cin >> s;

        for (char c : s)
            mp[c]++;

        char max_occur_char = ' ';
        int max_occur_count = 0;
        for (auto it : mp)
        {
            if (it.second > max_occur_count)
            {
                max_occur_char = it.first;
                max_occur_count = it.second;
            }
        }

        int rest_count = 0;
        for (auto it : mp)
        {
            if (it.first == max_occur_char)
                continue;

            // cout << it.first << " " << it.second << endl;
            rest_count += it.second;
        }

        if (max_occur_count > rest_count + 1)
        {
            cout << "No" << endl;
            continue;
        }
        cout << "Yes" << endl;

        vector<pair<int, char>> freq;
        for (auto &[c, cnt] : mp)
            freq.push_back({cnt, c});
        sort(freq.rbegin(), freq.rend());

        vector<char> chars;
        for (auto &[cnt, c] : freq)
            for (int i = 0; i < cnt; i++)
                chars.push_back(c);

        string ans(chars.size(), ' ');
        int idx = 0;
        for (int i = 0; i < (int)ans.size(); i += 2)
            ans[i] = chars[idx++];
        for (int i = 1; i < (int)ans.size(); i += 2)
            ans[i] = chars[idx++];
        cout << ans << endl;
    }

    return 0;
}