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

    ll d, f;
    cin >> d >> f;

    ll remainder = (d - f) % 7;
    
    ll result = (remainder == 0) ? 7 : (7 - remainder);
    
    cout << result << endl;

    return 0;
}