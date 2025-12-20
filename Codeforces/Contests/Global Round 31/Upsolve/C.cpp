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
        ll n, k;
        cin >> n >> k;
        
        vector<ll> a(k, 0);
        
        if (k & 1) {
            for (int i = 0; i < k; i++) {
                a[i] = n;
            }
        } else {
            int p = 0; // number of loose indices
            
            for (int bit = 30; bit >= 0; bit--) {
                if ((n >> bit) & 1) {
                    for (int j = 0; j < k; j++) {
                        if (j != min(p, (int)(k - 1))) {
                            a[j] += (1LL << bit);
                        }
                    }
                    if (p < k) p++;
                } else {
                    for (int j = 0; j < p / 2 * 2; j++) {
                        a[j] += (1LL << bit);
                    }
                }
            }
        }
        
        for (int i = 0; i < k; i++) {
            cout << a[i];
            if (i + 1 < k) cout << " ";
        }
        cout << endl;
    }
    
    return 0;
}