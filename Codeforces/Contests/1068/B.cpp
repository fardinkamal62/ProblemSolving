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
        ll n;
        cin >> n;

        int a[n];
        int b[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
            cin >> b[i];

        ll maximum = 0;
        ll minimum = 0;

        for (int i = 0; i < n; i++)
        {
            ll new_maximum = max(maximum - a[i], b[i] - minimum);
            ll new_minimum = min(minimum - a[i], b[i] - maximum);
            
            maximum = new_maximum;
            minimum = new_minimum;
        }

        cout << maximum << endl;
    }

    return 0;
}