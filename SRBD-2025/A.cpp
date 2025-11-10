/**
 *   author:   @fardinkamal62
 **/

#include "iostream"
using namespace std;

#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long tt;
    cin >> tt;

    while (tt--)
    {
        string time;
        cin >> time;
        string h = time.substr(0, 2);
        string m = time.substr(3, 2);

        if (h[0] == h[1])
        {
            cout << h[0] << h[1];
        } 
        if (m[0] == m[1])
        {
            cout << ":" << m[0] << m[1] << endl;
        }
        else
        {
            int hour = stoi(h);
            int minute = stoi(m);

            if (hour < 10) cout << "11:11\n";
            else if (hour < 20) cout << "22:22\n";
            else if (hour < 23) cout << "33:33\n";
            else cout << "00:00\n";
            // cout << ":";
        }
    }

    return 0;
}
