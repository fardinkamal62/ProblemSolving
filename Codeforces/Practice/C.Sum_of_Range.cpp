#include "bits/stdc++.h"

using namespace std;

#define endl "\n"

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long a, b;
    cin >> a >> b;

    if (a > b)
        swap(a, b);

    long long sum = (b * (b + 1)) / 2 - ((a - 1) * a) / 2;

    a = (a + 1) / 2; // Adjust 'a' for odd numbers
    b = b / 2;       // Adjust 'b' for odd numbers
    long long even = (b * (b + 1)) - (a * (a - 1));

    a = (a * 2) - 1; // Recalculate 'a' for odd numbers
    b = (b * 2) + 1; // Recalculate 'b' for odd numbers
    long long odd = sum - even; // Fix: Odd sum is total sum minus even sum

    cout << sum << endl
         << even << endl
         << odd << endl;

    return 0;
}