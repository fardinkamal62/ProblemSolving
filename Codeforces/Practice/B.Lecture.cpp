#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, m;
    cin >> n >> m;

    map<string, string> mp;
    while (m--)
    {
        string a, b;

        cin >> a >> b;
        mp[a] = mp[b] = (min(a.length(), b.length()) == a.length() ? a : b);
    }
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        cout << mp[s] << " ";
    }

    return 0;
}