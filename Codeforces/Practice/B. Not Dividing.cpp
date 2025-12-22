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

        for (int i = 0; i < n; i++) cin >> a[i];

        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
            {
                a[i]++;
            }
        }
        
        for (int i = 1; i < n; i++)
        {
            if (a[i] % a[i - 1] == 0)
            {
                a[i]++;
            }
        }
        for (auto i : a) cout << i << " ";
        
        cout << endl;
    }

    return 0;
}