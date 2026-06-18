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

    map<char, int> m;

    int odds = 0;
    for (int i = 0; i < s.size(); i++)
    {
        m[s[i]]++;
    }

    for (const auto [key, value] : m)
    {
        if (value & 1)
            odds++;
    }

    if (odds > 1)
        cout << "NO SOLUTION";
    else
    {
        string left = "", mid = "";
        for (const auto [key, value] : m)
        {
            left += string(value / 2, key);
            if (value & 1)
                mid = key;
        }
        string right = left;
        reverse(right.begin(), right.end());
        cout << left + mid + right;
    }

    return 0;
}