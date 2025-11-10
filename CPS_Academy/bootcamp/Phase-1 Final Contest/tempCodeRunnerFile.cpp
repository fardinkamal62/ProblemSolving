#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int n, result = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int temp = i;
        while (temp > 0)
        {
            int bit = temp % 2;
            temp /= 2;

            if (bit == 1)
            {
                result++;
            }
        }
    }

    cout << result << endl;

    return 0;
}