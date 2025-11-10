/**
 *   author:   @fardinkamal62
 **/

#include "iostream"
#include "map"

#define endl "\n"

using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, sleep_h, sleep_m;
        cin >> n >> sleep_h >> sleep_m;

        int min_diff = 24 * 60;
        for (int i = 0; i < n; i++)
        {
            int h, m;
            cin >> h >> m;

            int work_time = h * 60 + m;
            int sleep_time = sleep_h * 60 + sleep_m;

            int diff = (work_time - sleep_time + 24 * 60) % (24 * 60);
            min_diff = min(min_diff, diff);
        }

        int diff_h = min_diff / 60;
        int diff_m = min_diff % 60;
        cout << diff_h << " " << diff_m << endl;
    }

    return 0;
}