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

    map<string, int> handles;

    for (int i = 0; i < n; i++)
    {
        string handle;
        cin >> handle;
        
        int plus;
        cin >> plus;
        int minus;
        cin >> minus;
        handles[handle] = (100 * plus) - (50 * minus);

        int a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;
        handles[handle] += (a + b + c + d + e);
    }

    string leader = "";
    int maxScore = INT_MIN;
    for (auto &entry : handles)
    {
        if (entry.second > maxScore)
        {
            maxScore = entry.second;
            leader = entry.first;
        }
    }
    cout << leader << endl;

    return 0;
}