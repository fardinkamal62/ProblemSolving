#include <iostream>
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int k, result = 0, maxQuality = 0;
        cin >> k;


        for (int i = 0; i < k; i++)
        {
            int a,b;
            cin >> a >> b;

            if (a <= 10) {
                if (b > maxQuality) {
                    maxQuality = b;
                    result = i + 1;
                }
            }
        }

        cout << result << endl;;
        
    }
}