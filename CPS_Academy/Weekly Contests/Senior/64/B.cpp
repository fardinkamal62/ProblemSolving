/**
 *   author:   @fardinkamal62
 **/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        set<char> st;

        char c = s[0];
        st.insert(c);

        for (int i = 1; i < n; i++)
        {
            if (s[i] == c)
            {
                st.insert(c);
                st.insert(s[i+1]);
                c = s[i+1];
                i++;
            }
        }

        for (auto it : st)
            cout << it;
        cout << "\n";
    }

    return 0;
}
