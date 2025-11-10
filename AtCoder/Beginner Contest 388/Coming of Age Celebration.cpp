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
    vector<int> zeros;

    for (int i = 0; i < tt; i++) {
        int stone;
        cin >> stone;
        if (stone == 0) zeros.push_back(i);
        stones.push_back(stone);
    }

    int zeros_encountered = 0;
    for (int i = 0; i < tt; i++) {
        int stone = stones[i];

        auto cnt = count(stones.begin(), stones.begin() + i, 0);

        int before = i - (zeros_encountered);
        int after = tt - i - 1;

        int calc = (stone - after) + (before);
        if (calc < 1) calc = 0;
        cout << calc << " ";
        if (cnt > 0) zeros_encountered++;
    }


    return 0;
}
