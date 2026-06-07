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

    ll a, d;
    cin >> a >> d;

    if (a > d)
        cout << "No" << endl;
    else
        cout << "Yes" << endl;

    return 0;
}