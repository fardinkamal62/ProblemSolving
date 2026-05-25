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
    string num;
    cin >> num;

    int dot = num.find('.');
    string int_part = num.substr(0, dot);
    string frac_part = num.substr(dot + 1);

    if (int_part.back() == '9')
    {
        cout << "GOTO Vasilisa." << endl;
        return 0;
    }

    if (frac_part[0] >= '5')
        int_part.back()++;

    cout << int_part << endl;
    return 0;
}
