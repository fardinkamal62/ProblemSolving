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

    int n;
    cin >> n;

    vector<int> reports(n);
    for (int i = 0; i < n; i++)
        cin >> reports[i];

    int curr = 0;
    int curr_loss = 0;
    vector<int> result;

    for (int i = 0; i < n; i++)
    {
        if (reports[i] < 0)
            curr_loss++;

        if (curr_loss > 2)
        {
            result.push_back(curr);
            curr = 1;
            curr_loss = (reports[i] < 0) ? 1 : 0;
        }
        else
        {
            curr++;
        }
    }

    if (curr > 0)
    {
        result.push_back(curr);
    }

    cout << result.size() << endl;

    for (int i = 0; i < result.size(); i++)
    {
        if (i > 0) cout << " ";
        cout << result[i];
    }
    cout << endl;

    return 0;
}