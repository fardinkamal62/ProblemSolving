#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;

    vector<int> alphabet_counts(26, 0);

    string s;
    cin >> s;
    for (char c : s)
    {
        alphabet_counts[c - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < alphabet_counts[i]; j++)
        {
            char c = 'a' + i;
            cout << c;
        }
    }
    cout << endl;

    return 0;
}