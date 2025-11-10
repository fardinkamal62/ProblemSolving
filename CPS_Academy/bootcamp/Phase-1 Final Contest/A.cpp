#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;

    int n = max(a.size(), b.size());
    int carry = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        int digitA = (i < a.size()) ? a[a.size() - 1 - i] - '0' : 0;
        int digitB = (i < b.size()) ? b[b.size() - 1 - i] - '0' : 0;

        int sum = digitA + digitB + carry;
        carry = sum / 10;
        sum %= 10;

        if (carry > 0)
        {
            break;
        }
    }

    if (carry == 0)
    {
        cout << "Easy" << endl;
    }
    else
    {
        cout << "Hard" << endl;
    }
    return 0;
}