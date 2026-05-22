#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main()
{
    fastIO();

    int tt;
    cin >> tt;

    while (tt--)
    {
        int n;
        cin >> n;

        vector<int> num(n);
        for (int i = 0; i < n; i++)
            cin >> num[i];

        int last = num[0];
        int minimum = 0;

        for (int i = 1; i < n; i++)
        {
            if (num[i] < last)
                minimum = max(minimum, last - num[i]), last = num[i] + minimum;
            else
                last = num[i];
        }
        last = num[0];
        string answer = "YES";

        for (int i = 1; i < n; i++)
        {
            if (num[i] < last)
            {
                num[i] += minimum;

                if (num[i] < last)
                {
                    answer = "NO";
                    break;
                }
            }
            last = num[i];
        }
        cout << answer << endl;
    }

    return 0;
}