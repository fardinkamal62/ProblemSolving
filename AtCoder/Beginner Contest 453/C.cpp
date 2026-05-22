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

int main() {
    fastIO();

    int n;
    cin >> n;

    ll pos = 1;
    int result = 0;

    for (int i = 0; i < n; i++) {
        ll l;
        cin >> l;

        ll prev = pos;

        if (pos > 0) pos -= 2 * l;
        else pos += 2 * l;

        if ((prev > 0 && pos < 0) || (prev < 0 && pos > 0)) result++;
    }

    cout << result << endl;
    return 0;
}