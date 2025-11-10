#include <iostream>

using namespace std;

#define endl "\n"

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long n;
    cin >> n;
    cout << n / 2 << endl;

    if (n % 2 == 0)
    {
        for (int i = 0; i < n / 2; i++)
            cout << 2 << " ";
    }

    else
    {
        cout << 3 << " ";
        for (int i = 0; i < (n / 2) - 1; i++)
            cout << 2 << " ";
    }
    cout << endl;

    return 0;
}