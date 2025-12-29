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

vector<string> rotate90(vector<string> &grid)
{
    int n = grid.size();
    vector<string> rotated(n, string(n, ' '));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            rotated[j][n - 1 - i] = grid[i][j];
        }
    }
    return rotated;
}

vector<string> flipHorizontal(vector<string> &grid)
{
    int n = grid.size();
    vector<string> flipped(n);
    for (int i = 0; i < n; i++)
    {
        flipped[i] = grid[i];
        reverse(flipped[i].begin(), flipped[i].end());
    }
    return flipped;
}

vector<string> flipVertical(vector<string> &grid)
{
    vector<string> flipped = grid;
    reverse(flipped.begin(), flipped.end());
    return flipped;
}

bool isEqual(vector<string> &a, vector<string> &b)
{
    int n = a.size();
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

int main()
{
    fastIO();

    int n;
    cin >> n;

    vector<string> map1(n), map2(n);
    for (int i = 0; i < n; i++)
    {
        cin >> map1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> map2[i];
    }

    vector<vector<string>> transformations;

    transformations.push_back(map1);

    vector<string> rot90 = rotate90(map1);
    transformations.push_back(rot90);

    vector<string> rot180 = rotate90(rot90);
    transformations.push_back(rot180);

    vector<string> rot270 = rotate90(rot180);
    transformations.push_back(rot270);

    vector<string> hflip = flipHorizontal(map1);
    transformations.push_back(hflip);

    vector<string> vflip = flipVertical(map1);
    transformations.push_back(vflip);

    vector<string> hflip_rot90 = rotate90(hflip);
    transformations.push_back(hflip_rot90);

    vector<string> vflip_rot90 = rotate90(vflip);
    transformations.push_back(vflip_rot90);

    bool found = false;
    for (auto &trans : transformations)
    {
        if (isEqual(trans, map2))
        {
            found = true;
            break;
        }
    }

    cout << (found ? "Yes" : "No") << endl;

    return 0;
}