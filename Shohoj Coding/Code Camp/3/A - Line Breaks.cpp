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

    ll tt;
    cin >> tt;

    while (tt--)
    {
        int n, m;
        cin >> n >> m;

        int result = 0, sum = 0;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;

            sum += int(s.length());
            if (sum <= m)
            {
                result += 1;
            }
        }

        cout << result << endl;
    }

    return 0;
}