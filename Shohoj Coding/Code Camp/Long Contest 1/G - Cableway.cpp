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

    int r, g, b;
    cin >> r >> g >> b;
    r = ((r + 1) / 2 - 1) * 3, g = ((g + 1) / 2 - 1) * 3 + 1, b = ((b + 1) / 2 - 1) * 3 + 2;
    return cout << 30 + max(r, max(g, b)), 0;

    return 0;
}