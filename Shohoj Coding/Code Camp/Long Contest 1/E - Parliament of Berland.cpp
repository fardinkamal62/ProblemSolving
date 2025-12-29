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

    int n, a, b;
    cin >> n >> a >> b;

    if (n > a * b)
    {
        cout << -1 << endl;
        return 0;
    }

    vector<int> chairs(2);
    chairs[0] = 1;
    chairs[1] = 2;

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (j > 0)
            {
                cout << " ";
            }
            int p = (i + j) % 2;
            cout << (chairs[p] <= n ? chairs[p] : 0);
            chairs[p] += 2;
        }
        cout << endl;
    }

    return 0;
}