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

    ll tt;
    cin >> tt;

    while (tt--)
    {
        int size;
        cin >> size;
        
        vector<int> arr(2 * size);
        vector<int> freq(2 * size + 1, 0);
        
        for (int i = 0; i < 2 * size; i++)
        {
            cin >> arr[i];
            freq[arr[i]]++;
        }
        
        int odds = 0;
        int evens = 0;
        
        for (int i = 1; i <= 2 * size; i++)
        {
            if (freq[i] == 0)
                continue;
                
            if (freq[i] % 2 == 1)
            {
                odds++;
            }
            else
            {
                evens++;
            }
        }
        
        int u = min(evens, size);
        
        if (odds == 0 && (size - u) % 2 == 1)
        {
            if (u > 0)
            {
                u--;
            }
        }
        
        int result = odds + 2 * u;
        cout << result << '\n';
    }

    return 0;
}