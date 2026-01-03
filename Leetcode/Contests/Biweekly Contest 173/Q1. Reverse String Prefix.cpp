#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string reversePrefix(string s, int k)
    {
        string str = s.substr(0, k);
        reverse(str.begin(), str.end());

        return str + s.substr(k);
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    Solution sol;
    string s = "abcd";

    int k = 2;

    cout << sol.reversePrefix(s, k) << endl;

    return 0;
}