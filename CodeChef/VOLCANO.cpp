// ChatGPT Solution

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INFLL = (ll)4e18;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        int N;
        ll P;
        cin >> N >> P;
        vector<ll> A(N);
        for (int i = 0; i < N; ++i) cin >> A[i];

        const ll INF = (ll)1e18;
        vector<ll> left(N, INF), right(N, INF);

        // Left to right: track maximum height since last volcano
        ll curMax = -1; // -1 means no volcano seen yet
        for (int i = 0; i < N; ++i) {
            if (A[i] == 0) {
                curMax = 0;
                left[i] = 0;
            } else {
                if (curMax == -1) {
                    left[i] = INF; // unreachable from left (no volcano yet)
                } else {
                    curMax = max(curMax, A[i]);
                    left[i] = (curMax + P - 1) / P; // ceil(curMax / P)
                }
            }
        }

        // Right to left
        curMax = -1;
        for (int i = N - 1; i >= 0; --i) {
            if (A[i] == 0) {
                curMax = 0;
                right[i] = 0;
            } else {
                if (curMax == -1) {
                    right[i] = INF;
                } else {
                    curMax = max(curMax, A[i]);
                    right[i] = (curMax + P - 1) / P;
                }
            }
        }

        // Combine and output
        for (int i = 0; i < N; ++i) {
            if (A[i] == 0) {
                cout << 0;
            } else {
                ll ans = min(left[i], right[i]);
                // ans should always be finite because there's at least one volcano somewhere
                if (ans >= INF) ans = 0; // safety fallback (shouldn't happen given constraints)
                cout << ans;
            }
            if (i + 1 < N) cout << ' ';
        }
        cout << '\n';
    }
    return 0;
}
