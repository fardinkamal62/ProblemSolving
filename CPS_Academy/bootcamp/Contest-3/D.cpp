#include <iostream>
using namespace std;

int main()
{
    int n, x, result = 0;
    cin >> n >> x;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if (num <= x)
        {
            result = result + num;
        }
    }

    cout << result << endl;
    return 0;
}