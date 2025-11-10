/**
*   author:   @fardinkamal62
*   created:  11/01/2025 18:06
**/

#include "iostream"
#include "vector"
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, D;
    cin >> N >> D;

    vector<int> thickness(N);
    vector<int> length(N);
    for (int i = 0; i < N; i++) {
        int T, L;
        cin >> T >> L;

        thickness[i] = T;
        length[i] = L;
    }

    for (int i = 1; i <= D; i++) {
        int max = 0;
        for (int j = 0; j < N; j++) {
            int T = thickness[j];
            int L = length[j];

            int new_weight = T * (L + i);
            if (new_weight > max) max = new_weight;
        }

        cout << max << "\n";
    }

    return 0;
}
