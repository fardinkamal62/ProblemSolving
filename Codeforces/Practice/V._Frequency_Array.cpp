// /**
//  *   author:   @fardinkamal62
//  **/

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     long long n, m;
//     cin >> n >> m;
//     map<long long, long long> s;

//     for (int i = 0; i < n; i++)
//     {
//         long long x;
//         cin >> x;
//         if (s.find(x) == s.end())
//             s[x] = 1;
//         else
//             s[x]++;
//     }

//     for (int i = 1; i <= m; i++) {
//         cout << s[i] << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    vector<int> freq(m + 1, 0);
    /*for(auto x : a){
      freq[x]++;
    }
    */
    for (int i = 1; i <= n; i++)
    {
        freq[a[i]]++;
    }
    for (int i = 1; i <= m; i++)
    {
        if (freq[i] > 0)
        {
            cout << freq[i] << endl;
        }
    }
    return 0;
}