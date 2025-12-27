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
    string s;

    cin >> n >> s;
    int r = n % 2;
    int r2 = (n + 1) % 2;

    for (int i = n - 1; i >= 0; i--)
    {
        if (i % 2 == r)
            cout << s[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == r2)
            cout << s[i];
    }

    return 0;
}