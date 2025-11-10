#include "iostream"
#include "vector"
#include "algorithm"
#include "cmath"

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n,c;
        cin >> n >> c;
        int ans = 0;

        vector<int> a;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            
            if (x > c) ans++;
            else a.push_back(x);
        }
        sort(a.begin(), a.end(), greater<int>());


        int multipliers = 0;
        for (int i = 0; i < (int)a.size(); i++) {
            if (a[i] * (pow(2, multipliers)) > c) ans++;

            else multipliers++;
        }

        cout << ans << endl;
        a.clear();
        multipliers = 0;
    }
    return 0;
}
