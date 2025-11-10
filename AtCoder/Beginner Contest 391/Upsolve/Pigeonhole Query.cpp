/**
*   author:   @fardinkamal62
*   created:  02/02/2025 01:49
**/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, Q;
    cin >> N >> Q;

    int ans = 0;
    vector<int> cnt(N + 1, 1);
    vector<int> pos(N + 1);

    for (int i = 0; i <= N; i++) {
        pos[i] = i;
    }

    for (int i = 0; i < Q; i++) {
        int queryType;
        cin >> queryType;

        if (queryType == 1) {
            int P, H;
            cin >> P >> H;
            P--; H--;

            if (cnt[pos[P]] == 2) {
                ans--;
            }

            cnt[pos[P]]--;
            pos[P] = H;
            cnt[pos[P]]++;

            if (cnt[pos[P]] == 2) {
                ans++;
            }
        } else {
            cout << ans << endl;
        }
    }

    return 0;
}
