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

    vector<pair<int, int>> teams(n);
    for (int i = 0; i < n; ++i)
        cin >> teams[i].first >> teams[i].second;

    int count = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (i == j)
                continue;
            if (teams[i].first == teams[j].second)
                ++count;
        }
    }

    cout << count << endl;

    return 0;
}