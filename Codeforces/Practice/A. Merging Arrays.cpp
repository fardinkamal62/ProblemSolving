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

    ll n, m;
    cin >> n >> m;

    vector<ll> a(n);
    for (ll i = 0; i < n; i++) cin >> a[i];

    vector<ll> b(m);
    for (ll i = 0; i < m; i++) cin >> b[i];

    ll pointer_a = 0, pointer_b = 0;

    for (ll i = 0; i < n + m; i++)
    {
        if (pointer_a < n && pointer_b < m)
        {
            if (a[pointer_a] <= b[pointer_b])
            {
                cout << a[pointer_a] << " ";
                pointer_a++;
            }
            else
            {
                cout << b[pointer_b] << " ";
                pointer_b++;
            }
        }
        else if (pointer_a < n)
        {
            cout << a[pointer_a] << " ";
            pointer_a++;
        }
        else
        {
            cout << b[pointer_b] << " ";
            pointer_b++;
        }
    }
    cout << endl;

    return 0;
}