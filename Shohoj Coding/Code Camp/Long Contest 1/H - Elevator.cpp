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

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string s;
    int n;
    cin >> s >> n;

    if (s == "front" && n == 1)
        cout << "L" << endl;
    else if (s == "front" && n == 2)
        cout << "R" << endl;
    else if (s == "back" && n == 2)
        cout << "L" << endl;
    else if (s == "back" && n == 1)
        cout << "R" << endl;

    return 0;
}