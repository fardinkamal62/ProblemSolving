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

    ll n, s;
    cin >> n >> s;

    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    ll left = 0, maxLen = 0, sum = 0;

    for (ll right = 0; right < n; right++)
    {
        sum += a[right];

        while (sum > s)
        {
            sum -= a[left];
            left++;
        }

        maxLen = max(maxLen, right - left + 1);
    }
    
    cout << maxLen << endl;

    return 0;
}