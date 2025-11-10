#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;

    
    while (tt--)
    {
        ll numbers;
        cin >> numbers;
        vector<ll> num_array(numbers);

        for (int i = 0; i < numbers; i++)
        {
            ll number;
            cin >> number;
            num_array[i] = number;
        }

        ll x = -1, y = -1;

        for (int i = 0; i < numbers && x == -1; i++)
        {
            for (int j = i + 1; j < numbers; j++)
            {
                ll val1 = num_array[i];
                ll val2 = num_array[j];

                if (val2 % val1 % 2 == 0)
                {
                    x = val1;
                    y = val2;
                    break;
                }
            }
        }

        if (x == -1)
        {
            cout << -1 << "\n";
        }
        else
        {
            cout << x << " " << y << "\n";
        }
    }

    return 0;
}