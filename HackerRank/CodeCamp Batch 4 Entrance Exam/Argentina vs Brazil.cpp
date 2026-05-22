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

    ll A, B;
    cin >> A >> B;

    if (A > B)
    {
        cout << "Argentina" << endl;
        return 0;
    }

    if (B > A)
    {
        cout << "Brazil" << endl;
        return 0;
    }

    while (true)
    {
        string S1, S2;
        cin >> S1 >> S2;

        int argentinaPen = 0, brazilPen = 0;
        for (char c : S1) argentinaPen += (c == '1');
        for (char c : S2) brazilPen += (c == '1');

        if (argentinaPen > brazilPen)
        {
            cout << "Argentina" << endl;
            break;
        }

        if (brazilPen > argentinaPen)
        {
            cout << "Brazil" << endl;
            break;
        }
    }
    
    return 0;
}