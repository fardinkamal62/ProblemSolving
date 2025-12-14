#include <bits/stdc++.h>
using namespace std;

// Editorial solution

int main()
{
    int test;
    cin >> test;
    while (test-- > 0)
    {
        int n;
        cin >> n;
        int cnt2021 = n % 2020;
        int cnt2020 = (n - cnt2021) / 2020 - cnt2021;
        if (cnt2020 >= 0 && 2020 * cnt2020 + 2021 * cnt2021 == n)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}

// Solution - 2

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    fastIO();
    
    ll tt;
    cin >> tt;
    
    while (tt--)
    {
        ll n;
        cin >> n;

        while (n % 2020 != 0 && n >= 2020) {
            n -= 2021;
        }
        if (n % 2020 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}