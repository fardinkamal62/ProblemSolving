/**
 *   author:   @fardinkamal62
 *   created:  23/07/2025 08:09
 **/

#include "iostream"
#include "cmath"
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;

    double num_1, num_2;
    while (tt--)
    {
        int n;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;

            if (i == n - 2)
            {
                num_1 = a;
            }

            if (i == n - 1)
            {
                num_2 = a;
            }
        }

        double average = ceil((num_1 + num_2) / 2);
        cout << average - num_1 << endl;
    }
    return 0;
}
