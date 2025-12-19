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
        char g[8][8];
        vector<int> r;

        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> g[i][j];
             
                if (g[i][j] == 'R')
                    r.push_back(i);
            }
        }

        bool found = false;
        for (int i : r)
        {
            bool ok = true;
            for (int j = 0; j < 8; j++)
            {
                if (g[i][j] != 'R')
                {
                    ok = false;
                    break;
                }
            }
            if (ok)
            {
                cout << "R" << endl;
                found = true;
                break;
            }
        }
        if (!found)
            cout << "B" << endl;
    }

    return 0;
}