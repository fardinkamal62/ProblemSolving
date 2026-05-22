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
    
    ll n, k, result = 0;
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        ll run;
        cin >> run;

        if (run < k) result++;
    }
    
    cout << result << endl;
    
    return 0;
}