#include "iostream"

using namespace std;

int main()
{
    int tt;
    cin >> tt;

    for (int i = 0; i < tt; i++)
    {
        long long int n, p;
        cin >> n >> p; // p1 = oddius, p2 = evenius

        int winner = -1;
        if (p == 1)
        {
            if (n == 1)
                winner = 2;
            else
                winner = 1;
        }
        else
        {
            if (n > 1 && n % 4 == 1)
                winner = 2;
            else
                winner = 1;
        }

        cout << "Case " << i + 1 << ": " << (winner == 1 ? "Oddius" : "Evenius") << endl;
    }
}