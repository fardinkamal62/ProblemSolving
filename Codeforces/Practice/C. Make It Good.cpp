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
        int n;
        cin >> n;

        vector<int> a(n);
        for (auto &it : a) cin >> it;

        int pos = n - 1;
        
        while (pos > 0 && a[pos - 1] >= a[pos]) --pos;
        while (pos > 0 && a[pos - 1] <= a[pos]) --pos;
        
        cout << pos << endl;
    }

    return 0;
}