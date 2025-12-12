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

        string s;
        cin >> s;
        string a(n, '0'), b(n, '0');

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                a[i] = '0';
                b[i] = '0';
            }
            else if (s[i] == '1')
            {
                a[i] = '1';
                b[i] = '0';
                for (int j = i + 1; j < n; j++)
                {
                    a[j] = '0';
                    b[j] = s[j];
                }
                break;
            }
            else
            {
                a[i] = '1';
                b[i] = '1';
            }
        }

        cout << a << endl << b << endl;
    }

    return 0;
}