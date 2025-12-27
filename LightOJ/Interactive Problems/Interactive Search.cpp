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

    ll n;
    cin >> n;

    ll low = 1, high = n;
    
    for (int i = 0; i < 30; i++)
    {
        ll mid = low + (high - low) / 2;
        cout << "guess " << mid << endl;
        cout.flush();

        string response;
        cin >> response;

        if (response == "correct")
            break;
        else if (response == "low")
            low = mid + 1;
        else if (response == "high")
            high = mid - 1;
        else
            break;
    }

    return 0;
}