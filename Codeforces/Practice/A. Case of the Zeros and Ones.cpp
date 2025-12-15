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

    ll zeros = 0, ones = 0;
    int n;
    cin >> n;
    string s;
    cin >> s;

    for (char c : s)
    {
        if (c == '0')
            zeros++;
        else if (c == '1')
            ones++;
    }
    cout << n - 2 * min(zeros, ones) << endl;

    return 0;
}