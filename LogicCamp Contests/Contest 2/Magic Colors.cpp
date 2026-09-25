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

char mixes(char first, char second)
{
    if (first == second)
    {
        return 0;
    }

    if ((first == 'R' && second == 'B') || (first == 'B' && second == 'R'))
    {
        return 'P';
    }
    if ((first == 'R' && second == 'G') || (first == 'G' && second == 'R'))
    {
        return 'Y';
    }
    if ((first == 'G' && second == 'B') || (first == 'B' && second == 'G'))
    {
        return 'C';
    }

    return -1;
}

int main()
{
    fastIO();

    ll tt;
    cin >> tt;

    while (tt--)
    {
        ll x;
        cin >> x;

        string colors;
        cin >> colors;

        stack<char> st;

        for (int i = 0; i < x; i++)
        {
            char current = colors[i];

            while (!st.empty())
            {
                char prev = st.top();
                char mixed = mixes(prev, current);

                if (mixed == -1)
                    break;

                st.pop();
                current = mixed;

                if (current == 0)
                    break;
            }

            if (current != 0)
            {
                st.push(current);
            }
        }

        string answer;
        while (!st.empty())
        {
            answer += st.top();
            st.pop();
        }

        reverse(answer.begin(), answer.end());
        cout << answer << endl;
    }
    return 0;
}
