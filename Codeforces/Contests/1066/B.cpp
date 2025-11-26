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
        long long n, x, y;
        cin >> n >> x >> y;

        string s;
        cin >> s;

        long long count_of_four = 0, count_of_eight = 0;
        for (char c : s)
            if (c == '4')
                count_of_four++;
            else
                count_of_eight++;

        long long ax = llabs(x), ay = llabs(y);
        if (ax <= count_of_four + count_of_eight && ay <= count_of_four + count_of_eight && ax + ay <= count_of_four + 2 * count_of_eight)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}