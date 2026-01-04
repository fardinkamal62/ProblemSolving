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

char grid[3][3];
bool visited[3][3];
string result = "ZZZ";

int dr[] = {0, 1, 1, 1, 0, -1, -1, -1};
int dc[] = {1, 1, 0, -1, -1, -1, 0, 1};

bool isValid(int r, int c)
{
    return r >= 0 && r < 3 && c >= 0 && c < 3;
}

void dfs(int r, int c, string current)
{
    if (current.length() == 3)
    {
        result = min(result, current);
        return;
    }

    for (int i = 0; i < 8; i++)
    {
        int nr = r + dr[i];
        int nc = c + dc[i];

        if (isValid(nr, nc) && !visited[nr][nc])
        {
            visited[nr][nc] = true;
            dfs(nr, nc, current + grid[nr][nc]);
            visited[nr][nc] = false;
        }
    }
}

int main()
{
    fastIO();

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> grid[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            memset(visited, false, sizeof(visited));
            visited[i][j] = true;
            dfs(i, j, string(1, grid[i][j]));
        }
    }

    cout << result << endl;

    return 0;
}