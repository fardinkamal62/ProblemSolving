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

    int n;
    cin >> n;

    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << ' ';
        }
        for (int j = 1; j <= i; j++)
        {
            cout << '*';
        }
        cout << endl;
    }

    for (int i = 1; i <= 2; i++)
    {
        for (int j = 1; j <= 2 * n; j++)
        {
            cout << '*';
        }
        cout << endl;
    }

    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << ' ';
        }
        for (int j = 1; j <= i; j++)
        {
            cout << '*';
        }
        cout << endl;
    }

    return 0;
}
