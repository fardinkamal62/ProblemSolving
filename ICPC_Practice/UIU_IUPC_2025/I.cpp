#include "iostream"

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;

    while (tt--)
    {
        int a_val = -1, b_val = -1, a_count = 0, b_count = 0;
        for (int i = 0; i < 10; i++)
        {
            int a, b, c;
            char x, eq;

            cin >> a >> x >> b >> eq >> c;

            if (a_val == -1) a_val = a;
            if (b_val == -1) b_val = b;

            if (a == a_val) a_count++;
            if (a == b_val) b_count++;
            if (b == a_val) a_count++;
            if (b == b_val) b_count++;
        }

        cout << ((a_count > b_count) ? a_val : b_val ) << "\n";
    }

    return 0;
}