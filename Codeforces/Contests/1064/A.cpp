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
        int n;
        string s;
        cin >> n >> s;
        
        ll result = 0;
        char last_char = s[n - 1];
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] != last_char)
            {
                result ++;
            }
        }   

        cout << result << endl;
    }

    return 0;
}