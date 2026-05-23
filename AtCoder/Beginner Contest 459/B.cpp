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

int letter_to_num(char c)
{
    if (c == 'a' || c == 'b' || c == 'c')
        return 2;
    else if (c == 'd' || c == 'e' || c == 'f')
        return 3;
    else if (c == 'g' || c == 'h' || c == 'i')
        return 4;
    else if (c == 'j' || c == 'k' || c == 'l')
        return 5;
    else if (c == 'm' || c == 'n' || c == 'o')
        return 6;
    else if (c == 'p' || c == 'q' || c == 'r' || c == 's')
        return 7;
    else if (c == 't' || c == 'u' || c == 'v')
        return 8;
    else
        return 9;
}

int main()
{
    fastIO();

    ll n;
    cin >> n;

    string result = "";

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        result.append(to_string(letter_to_num(s[0])));
    }

    cout << result << endl;

    return 0;
}