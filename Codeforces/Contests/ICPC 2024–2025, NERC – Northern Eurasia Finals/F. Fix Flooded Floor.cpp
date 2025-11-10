//
// Created by Fardin Kamal on 15/12/24.
//

#include "iostream"
#include "unordered_set"

using namespace std;
int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(0);

    long long int tests;
    unordered_set<int>firstRow;

    cin >> tests;
    for (int i = 0; i< tests; i++) {
        char tile;
        cin >> tile;

        firstRow.insert(tile);
        // firstRow[i] = tile;
    }
    return 0;
}
