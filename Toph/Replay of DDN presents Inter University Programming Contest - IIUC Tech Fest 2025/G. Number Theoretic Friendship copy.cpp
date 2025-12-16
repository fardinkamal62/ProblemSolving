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

// Precompute which numbers are squares of primes
vector<bool> is_prime_square(MAX_X + 1, false);

void precompute_prime_squares() {
    // Sieve to find primes
    vector<bool> is_prime(MAX_X + 1, true);
    is_prime[0] = is_prime[1] = false;
    
    for (int i = 2; i * i <= MAX_X; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= MAX_X; j += i) {
                is_prime[j] = false;
            }
        }
    }
    
    // Mark squares of primes
    for (int i = 2; i <= MAX_X; i++) {
        if (is_prime[i] && (long long)i * i <= MAX_X) {
            is_prime_square[i * i] = true;
        }
    }
}

int main() {
    fastIO();

    // Precompute which numbers are squares of primes
    precompute_prime_squares();
    
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

                // Check if val is a square of a prime
                if (val <= MAX_X && is_prime_square[val]) {
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    
    return 0;
}