#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;


        int reversedA = 0, reversedB = 0;
        while (a > 0)
        {
            reversedA = reversedA * 10 + a % 10;
            a /= 10;
        }
        while (b > 0)
        {
            reversedB = reversedB * 10 + b % 10;
            b /= 10;
        }

        int reversedSum = reversedA + reversedB;

        int finalSum = 0;
        while (reversedSum > 0)
        {
            finalSum = finalSum * 10 + reversedSum % 10;
            reversedSum /= 10;
        }

        cout << finalSum << endl;
    }

    return 0;
}