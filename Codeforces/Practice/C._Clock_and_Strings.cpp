/**
 *   author:   @fardinkamal62
 **/

#include "iostream"
using namespace std;

bool between(int sm, int mx, int x)
{
    if (x >= sm && x <= mx)
        return true;
    return false;
}

int main()
{
    int tt;
    cin >> tt;

    while (tt--)
    {

        int a, b, c, d;
        cin >> a >> b >> c >> d;
        bool result = false;

        if (between(min(a, b), max(a, b), c) ^ between(min(a, b), max(a, b), d))
            cout << "YES" << "\n";
        else
            cout << "No" << "\n";
    }
    return 0;
}
