// Not working :(

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

string multiply(string num1, string num2)
{
    if (num1 == "0" || num2 == "0")
        return "0";
    
    int n1 = num1.size(), n2 = num2.size();
    vector<int> result(n1 + n2, 0);
    
    for (int i = n1 - 1; i >= 0; i--)
    {
        for (int j = n2 - 1; j >= 0; j--)
        {
            int mul = (num1[i] - '0') * (num2[j] - '0');
            int p1 = i + j, p2 = i + j + 1;
            int sum = mul + result[p2];
            
            result[p2] = sum % 10;
            result[p1] += sum / 10;
        }
    }
    
    string str = "";
    bool leadingZero = true;
    for (int digit : result)
    {
        if (digit != 0)
            leadingZero = false;
        if (!leadingZero)
            str += to_string(digit);
    }
    
    return str.empty() ? "0" : str;
}

int main()
{
    fastIO();

    int tt;
    cin >> tt;

    while (tt--)
    {
        string a, b;
        cin >> a >> b;
        cout << multiply(a, b) << endl;
    }

    return 0;
}