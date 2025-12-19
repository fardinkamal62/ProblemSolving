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
        ll n, k;
        cin >> n >> k;

        unordered_set<int> s;
        int K = 0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x < k)
                s.insert(x);
            else if (x == k)
                K++;
        }

        cout << k - s.size() + max(0, (K - (int)(k - s.size()))) << endl;
    }

    return 0;
}