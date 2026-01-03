#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int evalRPN(vector<string> &tokens)
    {
        stack<int> stk;
        for (const string &token : tokens)
        {
            if (token == "+" || token == "-" || token == "*" || token == "/")
            {
                int b = stk.top();
                stk.pop();
                int a = stk.top();
                stk.pop();
                int res;
                if (token == "+")
                    res = a + b;
                else if (token == "-")
                    res = a - b;
                else if (token == "*")
                    res = a * b;
                else
                    res = a / b;
                stk.push(res);
            }
            else
            {
                stk.push(stoi(token));
            }
        }
        return stk.top();
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    Solution sol;
    vector<string> tokens = {"2", "1", "+", "3", "*"};
    int result = sol.evalRPN(tokens);
    cout << result << endl;
    return 0;
}