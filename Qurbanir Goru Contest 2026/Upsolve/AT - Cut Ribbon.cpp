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

    int n, a, b, c, pieces = 0;
    cin >> n >> a >> b >> c;

    for (int i = 0; i * a <= n; ++i)
    {
        for (int j = 0; i * a + j * b <= n; ++j)
        {
            int k = (n - i * a - j * b) / c;
            if (i * a + j * b + k * c == n)
                pieces = max(i + j + k, pieces);
        }
    }
    cout << pieces << endl;

    return 0;
}