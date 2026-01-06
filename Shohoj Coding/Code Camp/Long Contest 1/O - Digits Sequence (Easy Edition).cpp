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
    
    ll k;
    cin >> k;

    string s = "";
    for (int i = 1; i < k + 5; i++)
    {
        s.append(to_string(i));
    }
    cout << s[k - 1] << endl;
    
    
    return 0;
}