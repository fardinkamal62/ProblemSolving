#include <iostream>
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int k;
        cin >> k;

        for (int i = 1; ; i++)
		{
			if (i % 3 == 0 || i % 10 == 3) continue;
			if (--k == 0)
			{
				cout << i << '\n';
				break;
			}
		}

    }
}