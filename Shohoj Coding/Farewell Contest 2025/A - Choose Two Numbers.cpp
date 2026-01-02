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
    
    int n, m;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++) cin >> b[i];

    set<int> s;
    s.insert(a.begin(), a.end());
    s.insert(b.begin(), b.end());

    vector<int> result;

    bool found = false;
    while(!found)
    {
        for (int num : a)
        {
            for (int num2 : b)
            {
                if (s.find(num + num2) == s.end())
                {
                    cout << num << " " << num2 << endl;
                    found = true;
                    break;
                }
            }
            if (found) break;
        }
        if (found) break;
    }

    
    return 0;
}