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

    ll n, m;
    cin >> n >> m;

    map<ll, ll> birds;
    int occurances[m] = {0};

    for (ll i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        birds[a] += b;
        occurances[a - 1]++;
    }
    
    for (auto bird : birds)
    {
        cout << fixed << setprecision(20) << (long double)bird.second / (long double)occurances[bird.first - 1] << endl;
    }

    return 0;
}