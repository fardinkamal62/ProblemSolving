#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

// Define the modulo value commonly used in competitive programming
const int MOD = 1e9 + 7;

// Function to calculate a^b % MOD
long long power(long long base, long long exp) {
    long long res = 1;
    base %= MOD;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp /= 2;
    }
    return res;
}

// Function to calculate modular inverse of n modulo MOD
// This uses Fermat's Little Theorem (only works if MOD is prime)
long long modInverse(long long n) {
    return power(n, MOD - 2);
}

// Function to calculate nCr % MOD
long long nCr_mod(int n, int r) {
    if (r < 0 || r > n) return 0;
    if (r == 0 || r == n) return 1;
    if (r > n / 2) r = n - r;

    // Precompute factorials if you have many queries (more efficient for repeated use)
    // For a single query, this iterative method works fine.
    long long res = 1;
    for (int i = 1; i <= r; ++i) {
        res = (res * (n - i + 1)) % MOD;
        res = (res * modInverse(i)) % MOD;
    }
    return res;
}

// Function to calculate the number of multisets modulo MOD
// n: number of distinct items available
// r: size of the multiset to generate
long long numberOfMultisets_mod(int n, int r) {
    if (n <= 0 || r < 0) {
        return 0;
    }
    // Use the stars and bars formula: C(n + r - 1, r)
    int formula_n = n + r - 1;
    int formula_r = r;
    return nCr_mod(formula_n, formula_r);
}

int main() {
    // Fast I/O for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, r;
    // Example input format (read n and r from input)
    // cin >> n >> r; 
    // long long result = numberOfMultisets_mod(n, r);
    // cout << result << endl;


    // Hardcoded example for demonstration:
    n = 1; // Distinct items
    r = 3; // Multiset size
    long long result = numberOfMultisets_mod(n, r);
    cout << "Result for n=1, r=3: " << result << endl; // Output: 6

    n = 10;
    r = 5;
    result = numberOfMultisets_mod(n, r);
    cout << "Result for n=10, r=5: " << result << endl; // Output: 2002

    return 0;
}
