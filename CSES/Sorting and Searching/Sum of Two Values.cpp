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

    ll n, x;
    cin >> n >> x;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    map<int, int> mp;

    for (int i = 1; i <= n; i++)
    {

        if (mp.find(x - arr[i - 1]) != mp.end())
        {

            cout << mp[x - arr[i - 1]] << ' ' << i << '\n';

            return 0;
        }

        mp[arr[i - 1]] = i;
    }

    cout << "IMPOSSIBLE" << endl;

    return 0;
}