#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    fastIO();
    
    ll tt;
    cin >> tt;

    map<ll, ll> mp;
    
    while (tt--)
    {
        ll a, b;
        cin >> a >> b;

        mp[a]++;
        mp[b + 1]--;
    }


    ll max = LLONG_MIN;

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        if (it == mp.begin()) continue;

        auto prev_iterator = prev(it);
        it->second += prev_iterator->second;

        if (it->second > max) {
            max = it->second;
        }
    }

    cout << max << endl;
    
    return 0;
}