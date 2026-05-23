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
    n--;

    string sentence = "HelloWorld";

    sentence.erase(n, 1);
    cout << sentence << endl;

    return 0;
}