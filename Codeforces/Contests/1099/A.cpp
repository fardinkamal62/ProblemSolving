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

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int last = 0;

        for (int i = 0; i < n; i++)
        {
            cout << last + 1 << " ";
            last = last + 2;
        }
        cout << endl;
    }

    return 0;
}