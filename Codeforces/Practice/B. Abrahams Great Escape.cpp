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

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        // Only impossible case: exactly 1 non-escape cell can't form a cycle
        if (k == n * n - 1)
        {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;

        int q = k / n; // full escape rows
        int r = k % n; // extra escape cells in row q

        vector<string> grid(n, string(n, '.'));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                bool escape = (i < q) || (i == q && j < r);

                if (escape)
                {
                    // Funnel everything toward (0,0) which exits via U
                    if (i == 0 && j == 0) grid[i][j] = 'U';
                    else if (i == 0)       grid[i][j] = 'L'; // row 0: chain left
                    else                   grid[i][j] = 'U'; // other rows: chain up
                }
                else
                {
                    // Non-escape: drain downward, bottom row uses R/L 2-cycle
                    if (i == n - 1)
                        grid[i][j] = (j == n - 1) ? 'L' : 'R';
                    else
                        grid[i][j] = 'D';
                }
            }
        }

        for (const string& row : grid)
            cout << row << endl;
    }

    return 0;
}
