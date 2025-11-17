#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

const int MAX_X = 1e6 + 5;

vector<ll> divisor_count() {
    vector<ll> divisor_count(MAX_X + 1, 0);
    for (ll i = 1; i <= MAX_X; i++)
    {
        for (ll j = i; j <= MAX_X; j += i)
        {
            divisor_count[j]++;
        }
    }
    return divisor_count;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;
    vector<ll> divisors = divisor_count();

    while (tt--)
    {
        int x;
        cin >> x;
        cout << divisors[x] << endl;
    }

    return 0;
}