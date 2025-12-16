// Not working :(

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

const int MAX_X = 2e5 + 5;

vector<long long> divisors()
{
    vector<long long> divisor_count(MAX_X + 1, 0);
    for (long long i = 1; i <= MAX_X; i++)
    {
        for (long long j = i; j <= MAX_X; j += i)
        {
            divisor_count[j]++;
        }
    }
    return divisor_count;
}

int main() {
    fastIO();

    vector<long long> divisor_count = divisors();
    
    ll tt;
    cin >> tt;
    
    while (tt--)
    {
        ll n, count = 0;
        cin >> n;

        vector<ll> students(n);
        for (ll i = 0; i < n; i++) cin >> students[i];

        for (ll i = 0; i < n; i++) {
            for (ll j = i + 1; j < n; j++) {
                ll gcd_ij = __gcd(students[i], students[j]);
                ll lcm_ij = (students[i] / gcd_ij) * students[j];

                ll val = lcm_ij / gcd_ij;

                if (divisor_count[val] == 3) count++;
            }
        }
        cout << count << endl;
    }
    
    return 0;
}