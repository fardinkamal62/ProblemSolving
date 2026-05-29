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

    string a;
    cin >> a;

    vector<int> nums;

    for (int i = 0; i < int(a.size()); i++)
    {
        if (isdigit(a[i]))
        {
            nums.push_back(a[i] - '0');
        }
    }
    sort(nums.begin(), nums.end());

    for (int i = 0; i < int(nums.size()); i++)
    {
        cout << nums[i] << (i == int(nums.size()) - 1 ? "" : "+");
    }
    cout << endl;

    return 0;
}