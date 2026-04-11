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

    int dp[200] = {0};
    dp[0] = 0;
    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 1;
    dp[4] = 1;
    dp[5] = 1;
    for (int i = 6; i <= 103; i++)
    {
        if (!dp[i - 2] || !dp[i - 3] || !dp[i - 5])
            dp[i] = 1;
        else
            dp[i] = 0;
    }

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (dp[n])
            cout << "First" << endl;
        else
            cout << "Second" << endl;
    }

    return 0;
}