#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

int64_t x0(int maxNum)
{
    // number of complete 4‑step blocks (each block uses 4 consecutive integers)
    int64_t blocks = maxNum / 4; // floor division
    int rem = maxNum % 4;        // leftover steps (0‑3)

    // start from the value after the first line
    int64_t x = 9 - 2 * blocks; // each full block reduces x by 2

    // contribution of the remaining 0‑3 steps
    // the first integer of the current (partial) block is 4*blocks + 2
    int64_t first = 4 * blocks + 2; // the smallest unused integer

    switch (rem)
    {
    case 0: /* nothing to add */
        break;
    case 1:
        x += first;
        break; // + (2k)
    case 2:
        x += first + (first + 1);
        break; // + (2k) + (2k+1)
    case 3:
        x += first + (first + 1) - (first + 2);
        break; // + (2k) + (2k+1) - (2k+2)
    }
    return x;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;

    while (tt--)
    {
        ll x, n;
        cin >> x >> n;

        if (x & 1)
            x++;
        else
            x--;

        int64_t delta = x0(n);
        x += delta;

        cout << x << endl;
    }

    return 0;
}