/**
*   author:   @fardinkamal62
*   created:  11/01/2025 18:43
**/

#include "iostream"
#include "vector"
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;

    vector<int> stones;

    for (int i = 0; i < tt; i++) {
        int stone;
        cin >> stone;
        stones.push_back(stone);
    }

    for (int i = 0; i < tt; i++) {
        for (int j = 0; j < i; j++) {
            if (stones[j] != 0) {
                stones[j]--;
                stones[i]++;
            }
        }
    }

    for (int i = 0; i < tt; i++) {
        if (stones[i] < 0) cout << 0 << " ";
        else cout << stones[i] << " ";
    }


    return 0;
}
