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
        int x;
        cin >> x;
        
        vector<int> ans;
        
        int sum = 0, last = 9;
        
        while (sum < x && last > 0)
        {
            ans.push_back(min(x - sum, last));
            sum += last;
            last--;
        }
        
        if (sum < x)
        {
            cout << -1 << "\n";
        }
        
        else
        {
            reverse(ans.begin(), ans.end());
            for (int i : ans)
            {
                cout << i;
            }
            cout << "\n";
        }
    }

    return 0;
}