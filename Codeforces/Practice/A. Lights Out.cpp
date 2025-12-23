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

    int d[4][4] = {0}, p[4][4] = {0};

    for (int i = 1; i <= 3; ++i)
    {
        for (int j = 1; j <= 3; ++j)
        {
            cin >> d[i][j];
        }
    }
    for (int i = 1; i <= 3; ++i)
    {
        for (int j = 1; j <= 3; ++j)
        {
            p[i][j] = d[i][j] + d[i + 1][j] + d[i - 1][j] + d[i][j + 1] + d[i][j - 1];
        }
    }
    for (int i = 1; i <= 3; ++i)
    {
        for (int j = 1; j <= 3; ++j)
        {
            cout << 1 - (p[i][j] % 2);
        }
        if (i != 3)
            cout << endl;
    }

    return 0;
}