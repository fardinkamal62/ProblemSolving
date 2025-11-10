#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;
    long long result = 0;

    bool removed = false;

    vector<int> digits;
    while (n > 0)
    {
        long long digit = n % 10;
        n /= 10;
        if (digit == 0 && !removed)
        {
            removed = true;
            continue;
        }
        digits.push_back((int)digit);
    }

    for (auto it = digits.rbegin(); it != digits.rend(); ++it)
    {
        result = result * 10 + *it;
    }

    cout << result << endl;

    return 0;
}