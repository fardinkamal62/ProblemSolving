#include <bits/stdc++.h>
using namespace std;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main()
{
    fastIO();

    int w;
    cin >> w;

    if (w > 2 && w % 2 == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}