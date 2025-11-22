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

    vector<string> gray_code;
    gray_code.push_back("");

    for (int i = 0; i < tt; i++)
    {
        int size = gray_code.size();
        for (int j = size - 1; j >= 0; j--)
        {
            gray_code.push_back(gray_code[j]);
        }

        size *= 2;
        for (int j = 0; j < size; j++)
        {
            if (j < gray_code.size() / 2)
            {
                gray_code[j] += "0";
            }
            else
            {
                gray_code[j] += "1";
            }
        }
    }
    for (int i = 0; i < gray_code.size(); i++)
    {
        cout << gray_code[i] << endl;
    }

    return 0;
}