#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long


vector<ll> divisors(ll num)
{
    vector<ll> result;
    for (long long i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            result.push_back(i);
        }
    }
    return result;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    vector<ll> result = divisors(n);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }
    

    return 0;
}