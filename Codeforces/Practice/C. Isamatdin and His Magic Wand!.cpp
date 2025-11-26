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
        ll n, evens = 0, odds = 0;
        cin >> n;

        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 == 0)
                evens++;
            else
                odds++;
        }

        if (!odds || !evens)
            for (ll a : arr)
                cout << a << " ";

        else
        {
            sort(arr.begin(), arr.end());
            for (ll a : arr)
                cout << a << " ";
        }
        cout << endl;
    }

    return 0;
}