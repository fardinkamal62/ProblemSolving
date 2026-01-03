#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> exclusiveTime(int n, vector<string> &logs)
    {
        vector<int> result(n, 0);
        stack<int> stk;
        int prevTime = 0;

        for (const string &log : logs)
        {
            stringstream ss(log);
            string idStr, type, timeStr;
            getline(ss, idStr, ':');
            getline(ss, type, ':');
            getline(ss, timeStr, ':');

            int id = stoi(idStr);
            int time = stoi(timeStr);

            if (type == "start")
            {
                if (!stk.empty())
                {
                    result[stk.top()] += time - prevTime;
                }
                stk.push(id);
                prevTime = time;
            }
            else
            {
                result[stk.top()] += time - prevTime + 1;
                stk.pop();
                prevTime = time + 1;
            }
        }

        return result;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    Solution sol;
    int n = 2;
    vector<string> logs = {"0:start:0", "1:start:2", "1:end:5", "0:end:6"};
    vector<int> result = sol.exclusiveTime(n, logs);

    for (int time : result)
    {
        cout << time << " ";
    }
    cout << endl;

    return 0;
}