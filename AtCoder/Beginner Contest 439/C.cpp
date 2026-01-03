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
    
    ll N;
    cin >> N;
    
    vector<int> count(N + 1, 0);
    
    for (ll x = 1; x * x < N; x++)
    {
        for (ll y = x + 1; x * x + y * y <= N; y++)
        {
            ll n = x * x + y * y;
            count[n]++;
        }
    }
    
    vector<ll> result;
    for (ll n = 1; n <= N; n++)
    {
        if (count[n] == 1)
        {
            result.push_back(n);
        }
    }
    
    cout << result.size() << endl;
    for (ll num : result)
    {
        cout << num;
        if (num != result.back())
            cout << " ";
    }
    if (!result.empty())
        cout << endl;
    
    return 0;
}