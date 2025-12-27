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
        string r;
        cin >> r;
        int n = r.size();

        set<int> req;
        req.insert(1);
        req.insert(n);
        for (int i = 0; i < n; ++i)
        {
            if (r[i] == 's')
                req.insert(i + 1);
        }

        long long ops = 0;
        for (int pos : req)
        {
            if (r[pos - 1] == 'u')
                ops += 1;
        }

        vector<int> vc(req.begin(), req.end());
        for (size_t i = 1; i < vc.size(); ++i)
        {
            int a = vc[i - 1], b = vc[i];
            int gap = b - a;
            if (gap >= 2)
            {
                ops += (gap - 1) / 2;
            }
        }

        cout << ops << endl;
    }

    return 0;
}