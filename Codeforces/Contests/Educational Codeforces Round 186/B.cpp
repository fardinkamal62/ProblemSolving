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

long long pw4(int k)
{
    long long result = 1;
    for (int i = 0; i < k; i++)
        result *= 4;
    return result;
}

bool can(int layers, long long w, long long d)
{
    if (layers == 0)
        return true;

    int oddLayerCount = (layers + 1) / 2;
    int evenLayerCount = layers / 2;

    long long pow4_odd = pw4(oddLayerCount);
    long long pow4_even = pw4(evenLayerCount);

    long long oddSum = (pow4_odd - 1) / 3;
    long long evenSum = 2 * (pow4_even - 1) / 3;

    if (oddSum <= w && evenSum <= d)
        return true;

    if (oddSum <= d && evenSum <= w)
        return true;

    return false;
}

int main()
{
    fastIO();

    int tt;
    cin >> tt;

    while (tt--)
    {
        long long w, d;
        cin >> w >> d;

        int left = 0, right = 30;
        while (left < right)
        {
            int mid = (left + right + 1) / 2;
            if (can(mid, w, d))
                left = mid;
            else
                right = mid - 1;
        }
        cout << left << endl;
    }
    return 0;
}
