#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

void print_separated(ll number)
{
    if (number == 0)
        return;

    print_separated(number / 10);
    cout << number % 10 << " ";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;

    while (tt--)
    {
        ll num;
        cin >> num;
        if (num == 0)
            cout << "0";
        else
            print_separated(num);
        cout << endl;
    }

    return 0;
}