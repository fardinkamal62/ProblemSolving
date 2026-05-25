#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main()
{
    fastIO();

    ll tt;
    cin >> tt;

    vector<ll> rooms(10, 0);

    while (tt--)
    {
        char c;
        cin >> c;

        if (c == 'L')
        {
            for (int i = 0; i < 10; i++)
            {
                if (rooms[i] == 0)
                {
                    rooms[i] = 1;
                    break;
                }
            }
        }
        else if (c == 'R')
        {
            for (int i = 9; i >= 0; i--)
            {
                if (rooms[i] == 0)
                {
                    rooms[i] = 1;
                    break;
                }
            }
        }
        else
        {
            int room_num = c - '0';
            rooms[room_num] = 0;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        cout << rooms[i];
    }
    cout << endl;

    return 0;
}