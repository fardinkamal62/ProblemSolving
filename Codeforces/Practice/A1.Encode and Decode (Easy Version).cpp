#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

void encode()
{
    ll n;
    cin >> n;

    string key;
    for (int i = 0; i < n; i++)
    {
        ll k;
        cin >> k;
        key += char(k + 96);
    }

    cout << key;
}

void decode()
{
    string key;
    getline(cin, key);

    cout << key.size();
    for (char ch : key)
    {
        cout << " " << int(ch) - 96;
    }
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string type;
    cin >> type;
    cin.ignore();

    if (type == "first")
        encode();
    else
        decode();

    return 0;
}
