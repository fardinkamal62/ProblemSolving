/**
 *   author:   @fardinkamal62
 **/

#include "iostream"
#include "string"

using namespace std;

int main()
{
#ifdef ONLINEJUDGE
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    string line;
    int index = -1;

    int lines = 0;
    while (getline(cin, line))
    {
        if (((lines - 1) % 8) == 0)
            cout << "\n";

        for (int i = 0; i < 8; i++)
        {
            if (line[i] != '.')
            {
                if (index != i)
                    cout << "\n", index = i;
                cout << line[i];
                index = i;
            }
        }
        lines++;

        // for (int i = 0; i < 8; i++)
        // {
        //     if (line[i] == '.' && index != -1)
        //         dots++;

        //     if (line[i] != '.' && index == -1)
        //         index = i;
        //     if (line[i] != '.' && i == index)
        //     {
        //         if (dots > 8)
        //         {
        //             cout << "\n"
        //                  << line[i];
        //             index = i;
        //             dots = 0;
        //         }
        //         else
        //         {

        //             cout << line[i];
        //             index = i;
        //             dots = 0;
        //         }
        //     }
        //     if (line[i] != '.' && i != index)
        //     {
        //         cout << "\n"
        //              << line[i];
        //         index = i;
        //         dots = 0;
        //     }
        // }
    }

#ifdef ONLINEJUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);
#endif

    return 0;
}
