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

    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<int> d(n);
    for (int i = 0; i < n; i++)
        cin >> d[i];

    int p = 0;
    for (int t = 0; t < n; t++)
    {
        if (s[p] == '<')
        {
            p -= d[p];
        }
        else
        {
            p += d[p];
        }
        if (p < 0 || p >= n)
        {
            cout << "FINITE" << endl;
            return 0;
        }
    }

    cout << "INFINITE" << endl;

    return 0;
}