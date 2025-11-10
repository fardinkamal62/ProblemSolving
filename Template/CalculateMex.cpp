#include <vector>
#include <set>
#include <algorithm>
#include "iostream"

using namespace std;

int calculateMEX(vector<int>& triplet) {
    set<int> elements(triplet.begin(), triplet.end());
    int mex = 0;
    while (elements.count(mex)) mex++;
    return mex;
}