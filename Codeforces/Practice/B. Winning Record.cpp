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

    ll n, k;
    cin >> n >> k;

    vector<vector<ll>> games(n + 1, vector<ll>(2, 0)); // games[i][0] = wins, games[i][1] = losses

    for (ll i = 1; i <= n; i++)
    {
        char ch;
        cin >> ch;

        if (i)
            games[i][0] = games[i - 1][0], games[i][1] = games[i - 1][1];
        if (ch == 'W')
            games[i][0]++;
        else
            games[i][1]++;
    }

    // for (ll i = 0; i < n; i++)
    // {
    //     cout << "games[" << i << "] = " << games[i][0] << " " << games[i][1] << endl;
    // }

    for (ll i = 0; i < k; i++)
    {
        ll a, b;
        cin >> a >> b;
        a--;

        ll wins = 0, losses = 0;
        if (a == 1)
        {
            wins = games[b][0];
            losses = games[b][1];
        }
        else
        {
            wins = games[b][0] - games[a][0];
            losses = games[b][1] - games[a][1];
        }

        // cout << "Query " << i + 1 << ": wins = " << wins << ", losses = " << losses << " => " << endl;

        if (wins > losses)
            cout << 'Y';
        else
            cout << 'N';
    }
    cout << endl;

    return 0;
}