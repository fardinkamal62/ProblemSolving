#include "iostream"
#include "vector"
#include "map"
#include "algorithm"

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<int, int> p, q;

    for (int i = 1; i <= n; i++)
    {
        int c;
        cin >> c;
        p[i] = c;
    }

    for (int i = 1; i <= n; i++)
    {
        int c;
        cin >> c;
        q[i] = c;
    }

    for (int i = 1; i <= n; i++)
    {
        int o = q[i];
        cout << o << " ";
        // cout << p[o] << " ";
    }

    return 0;
}
