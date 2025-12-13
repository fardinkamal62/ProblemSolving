// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define endl "\n"

// void fastIO()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);
// }

// int main()
// {
//     fastIO();

//     ll n, m, result = 0;
//     cin >> n >> m;

//     vector<ll> a(n, 0);

//     for (ll i = 0; i < m; i++)
//     {
//         ll r, c;
//         cin >> r >> c;
//         r--, c--;

//         // int start_position = r * c;

//         if (!a[r * c] && !a[(r + 1) * c] && !a[r * (c + 1)] && !a[(r + 1) * (c + 1)])
//         {
//             result++;
//             a[r * c] = 1;
//             a[(r + 1) * c] = 1;
//             a[r * (c + 1)] = 1;
//             a[(r + 1) * (c + 1)] = 1;
//         }
//     }
//     cout << result << endl;
//     return 0;
// }

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

    ll n, m, result = 0;
    cin >> n >> m;

    set<ll> occupied;

    for (ll i = 0; i < m; i++)
    {
        ll r, c;
        cin >> r >> c;
        r--, c--;

        ll pos1 = r * n + c;
        ll pos2 = (r + 1) * n + c;
        ll pos3 = r * n + (c + 1);
        ll pos4 = (r + 1) * n + (c + 1);

        if (occupied.find(pos1) == occupied.end() &&
            occupied.find(pos2) == occupied.end() &&
            occupied.find(pos3) == occupied.end() &&
            occupied.find(pos4) == occupied.end())
        {

            result++;
            occupied.insert(pos1);
            occupied.insert(pos2);
            occupied.insert(pos3);
            occupied.insert(pos4);
        }
    }

    cout << result << endl;
    return 0;
}