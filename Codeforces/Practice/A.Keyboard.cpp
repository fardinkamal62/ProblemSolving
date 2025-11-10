#include <bits/stdc++.h>
using namespace std;

int main()
{
    string keyboard[3] = {
        {"qwertyuiop"},
        {"asdfghjkl;"},
        {"zxcvbnm,./"}};

    char orientation;
    cin >> orientation;

    string inp;
    cin >> inp;

    for (int i = 0; i < inp.size(); i++)
    {
        char current_char = inp[i];
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < keyboard[j].size(); k++)
            {
                if (keyboard[j][k] == current_char)
                {
                    cout << keyboard[j][k + (orientation == 'R' ? -1 : 1)];
                    j = 4;
                    break;
                }
            }
        }
    }

    return 0;
}