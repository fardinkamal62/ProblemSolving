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
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<ll> st;
        for (int i = 0; i < n; i++)
        {
            ll cur = a[i];
            while (!st.empty() && st.back() > cur)
            {
                cur += st.back();
                st.pop_back();
            }
            st.push_back(cur);
        }

        cout << st.back() << endl;
    }

    return 0;
}