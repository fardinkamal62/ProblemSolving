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

    ll left = 0, minLen = LLONG_MAX, sum = 0;

    for (ll right = 0; right < n; right++)
    {
        sum += a[right];

        while (sum >= s)
        {
            minLen = min(minLen, right - left + 1);
            sum -= a[left];
            left++;
        }
    }
    
    cout << (minLen == LLONG_MAX ? -1 : minLen) << endl;

    return 0;
}