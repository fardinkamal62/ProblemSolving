#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;

    int n;
    cin >> n;


    x *= (n + 1);

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        sum += p;
    }

    cout << (x - sum) << endl;
    
    return 0;
}