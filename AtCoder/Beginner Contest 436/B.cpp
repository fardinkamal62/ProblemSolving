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

    ll n;
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n, -1));

    matrix[0][(n - 1) / 2] = 1;

    int last_r = 0;
    int last_c = (n - 1) / 2;

    for (int num = 2; num <= n * n; num++)
    {
        int next_r = (last_r - 1 + n) % n;
        int next_c = (last_c + 1) % n;
        
        if (matrix[next_r][next_c] == -1)
        {
            last_r = next_r;
            last_c = next_c;
            matrix[last_r][last_c] = num;
        }
        else
        {
            last_r = (last_r + 1) % n;
            matrix[last_r][last_c] = num;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j];
            if (j < n - 1) cout << " ";
        }
        cout << endl;
    }

    return 0;
}