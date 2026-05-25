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

    vector<string> prev_year(n);
    vector<string> current_year(n);

    for (ll i = 0; i < n; i++)
        cin >> prev_year[i];

    for (ll i = 0; i < n; i++)
        cin >> current_year[i];

    map<string, ll> freq;
    for (auto &s : prev_year)
        freq[s]++;
    for (auto &s : current_year)
        freq[s]--;

    ll result = 0;
    for (auto &[s, cnt] : freq)
        if (cnt > 0)
            result += cnt;

    cout << result << endl;

    return 0;
}