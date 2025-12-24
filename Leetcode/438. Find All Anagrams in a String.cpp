#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> findAnagrams(string s, string p)
    {
        int k = p.size();
        int n = s.size();
        if (k > n)
        {
            return {};
        }

        vector<int> v;
        unordered_map<char, int> need;
        unordered_map<char, int> window;

        for (char c : p) need[c]++;
        
        int i = 0;
        for (int j = 0; j < n; j++)
        {
            window[s[j]]++;

            if (j - i + 1 == k)
            {
                if (window == need)
                {
                    v.push_back(i);
                }
                window[s[i]]--;
                if (window[s[i]] == 0)
                {
                    window.erase(s[i]);
                }
                i++;
            }
        }
        return v;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s = "cbaebabacd", p = "abc";
    Solution sol;
    vector<int> result = sol.findAnagrams(s, p);
    for (int index : result)
    {
        cout << index << " ";
    }
    cout << endl;

    return 0;
}