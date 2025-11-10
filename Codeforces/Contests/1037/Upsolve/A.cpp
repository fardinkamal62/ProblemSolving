#include "iostream"
#include "limits.h"
#include "string"
using namespace std;
 
// Link: https://codeforces.com/contest/2126/problem/A
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--)
    {
        string n;
        cin >> n;

        int min_num = INT_MAX;
        for (int i = 0; i < n.size(); i++)
        {
            min_num = min(min_num, (int)n[i] - '0');
        }
        cout << min_num << endl;
        min_num = INT_MAX;
    }
    return 0;
}
