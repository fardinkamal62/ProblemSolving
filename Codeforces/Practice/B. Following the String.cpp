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
        ll n;
        cin >> n;

        map<char, int> m;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;

            for (char c = 'a'; c <= 'z'; c++)
            {
                if (m[c] == x)
                {
                    cout << c;
                    m[c]++;
                    break;
                }
            }
        }
        cout << endl;
    }

    return 0;
}