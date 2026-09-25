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

    multiset<ll> values;
    string line;

    while (getline(cin, line))
    {
        stringstream cl(line);
        ll value;
        bool has_node = false;

        while (cl >> value)
        {
            if (value != -1)
            {
                values.insert(value);
                has_node = true;
            }
        }

        if (!has_node)
            break;
    }

    int ops;
    cin >> ops;

    while (ops--)
    {
        int type;
        cin >> type;

        if (type == 1)
        {
            ll value;
            cin >> value;
            values.insert(value);
        }
        else
        {
            if (values.empty())
            {
                cout << -1 << endl;
                continue;
            }

            auto maximum = prev(values.end());
            cout << *maximum << endl;
            values.erase(maximum);
        }
    }

    return 0;
}
