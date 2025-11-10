/**
*   author:   @fardinkamal62
**/

#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll modPow(ll base, ll exp, ll mod) {
    ll res = 1;
    base %= mod;
    while (exp > 0) {
        if (exp & 1) res = (res * base) % mod;
        base = (base * base) % mod;
        exp >>= 1;
    }
    return res;
}

ll binomial_coeff(ll n, ll k) {
    if (k > n - k) k = n - k;
    ll res = 1;
    for (int i = 0; i < k; i++) {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}

const ll M = 998244353;
const ll MAXN = 2005;
vector<vector<ll>> C(MAXN, vector<ll>(MAXN, 0));
void precompute_binomial(int n) {
    for (int i = 0; i < n; i++) {
        C[i][0] = 1;
        for (int j = 1; j <= i; j++) {
            C[i][j] = (C[i-1][j-1] + C[i-1][j]) % M;
        }
    }
}

int main() {
#ifdef ONLINEJUDGE
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int tt;
    cin >> tt;

    precompute_binomial(MAXN);
    while (tt--) {
        ll result = 0;
        int n;
        cin >> n;

        for (int i = 1; i <= n; i++) {
            for (int j = i; j <= n; j++) {
                result ^= C[j][i];
            }
        }
        cout << result << endl;
    }

#ifdef ONLINEJUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
#endif

    return 0;
}
