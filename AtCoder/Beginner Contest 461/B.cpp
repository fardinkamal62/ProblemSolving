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

    ll n;
    cin >> n;

    vector<int> A(n + 1), B(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> A[i];
    for (int i = 1; i <= n; i++)
        cin >> B[i];

    for (int i = 1; i <= n; i++)
    {
        if (B[A[i]] != i)
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;

    return 0;
}