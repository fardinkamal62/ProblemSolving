/**
*   author:   @fardinkamal62
**/

#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;

#define endl '\n';


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long tt;
    cin >> tt;

    while (tt--) {
        int a, b, n;
        cin >> a >> b >> n;

        string time;
        cin >> time;

        int bus_1_leaves_at = 0;
        int bus_2_leaves_at = 0;

        int hh = stoi(time.substr(0, 2));
        int mm = stoi(time.substr(3, 2));

        int current_minutes = (hh - 7) * 60 + mm;
        
        bool possible = false;
        int seats = 20;

        int next_bus_a = 0;
        do {
            next_bus_a += a;
        } while (next_bus_a < current_minutes);
        // cout << "next_bus_a: " << next_bus_a << endl;

        int next_bus_b = 0;
        do {
            next_bus_b += b;
        } while (next_bus_b < current_minutes);
        // cout << "next_bus_b: " << next_bus_b << endl;
        if (next_bus_a == next_bus_b) seats += 20;

        if (n <= seats) possible = true;


        if (possible) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }

    return 0;
}
