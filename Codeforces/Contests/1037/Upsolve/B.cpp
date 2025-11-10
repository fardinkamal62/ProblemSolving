#include "iostream"
using namespace std;
 
// Link: https://codeforces.com/contest/2126/problem/B
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, k, result = 0;
        cin >> n >> k;

        int counter = 0;
        int is_break = 0; 

        for (int i = 0; i < n; i++)
        {
            int weather;
            cin >> weather;
            if (is_break == 1) {
                is_break = 0;
                continue;
            }

            if (weather == 0) {
                counter++;
                if (counter == k) {
                    result++;
                    counter = 0;
                    is_break = 1;
                }
            } else {
                counter = 0;
                is_break = 0;
            }
        }
        cout << result << endl;
    }
    return 0;
}
