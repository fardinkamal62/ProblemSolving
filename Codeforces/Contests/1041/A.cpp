#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int calculateMEX(vector<int>& triplet) {
    set<int> elements(triplet.begin(), triplet.end());
    int mex = 0;
    while (elements.count(mex)) mex++;
    return mex;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        int fixedValue = -1;
        bool allSame = true;
        
        for (int i = 0; i < n; i++) {
            if (a[i] != -1) {
                if (fixedValue == -1) {
                    fixedValue = a[i];
                } else if (fixedValue != a[i]) {
                    allSame = false;
                    break;
                }
            }
        }
        
        if (!allSame) {
            cout << "NO\n";
        } else {
            if (fixedValue == -1) {
                fixedValue = 1;
            }
            
            vector<int> triplet = {fixedValue, fixedValue, fixedValue};
            int mexVal = calculateMEX(triplet);
            int maxMinDiff = fixedValue - fixedValue;
            
            cout << (mexVal == maxMinDiff ? "YES" : "NO") << "\n";
        }
    }
    return 0;
}