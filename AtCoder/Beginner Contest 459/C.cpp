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
    int n, q;
    cin >> n >> q;

    vector<int> add(n + 1, 0);
    vector<int> cnt(2 * q + 2, 0);
    cnt[0] = n;

    int off = 0;

    for (int s = 0; s < q; s++)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            int x;
            cin >> x;
            add[x]++;
            cnt[add[x]]++;
            if (cnt[1 + off] == n)
                off++;
        }
        else
        {
            int y;
            cin >> y;
            int idx = y + off;
            cout << (idx < (int)cnt.size() ? cnt[idx] : 0) << '\n';
        }
    }

    return 0;
}
