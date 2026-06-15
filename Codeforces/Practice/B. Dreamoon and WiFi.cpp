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

    string s1, s2;
    cin >> s1 >> s2;

    int target = count(s1.begin(), s1.end(), '+') - count(s1.begin(), s1.end(), '-');

    int current = count(s2.begin(), s2.end(), '+') - count(s2.begin(), s2.end(), '-');

    int unknown = count(s2.begin(), s2.end(), '?');

    int remaining = target - current;

    if ((unknown + remaining) % 2 != 0 || abs(remaining) > unknown)
    {
        cout << fixed << setprecision(12) << 0.0 << endl;
        return 0;
    }

    int plus_needed = (unknown + remaining) / 2;

    if (plus_needed < 0 || plus_needed > unknown)
    {
        cout << fixed << setprecision(12) << 0.0 << endl;
        return 0;
    }

    vector<vector<double>> C(unknown + 1, vector<double>(unknown + 1, 0));

    for (int i = 0; i <= unknown; i++)
    {
        C[i][0] = C[i][i] = 1;
        for (int j = 1; j < i; j++)
        {
            C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
        }
    }

    double probability = C[unknown][plus_needed] / pow(2.0, unknown);

    cout << fixed << setprecision(12) << probability << endl;

    return 0;
}