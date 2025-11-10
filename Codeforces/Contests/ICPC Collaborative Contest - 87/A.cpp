/**
 *   author:   @fardinkamal62
 **/

#include "iostream"
using namespace std;

#define endl '\n'

int main()
{
    int w, h;
    cin >> w >> h;

    int chef_height = 130;
    int chef_weight = 60;

    if (chef_height >= h && chef_weight <= w)
        cout << "Yes" << "\n";
    else
        cout << "No" << "\n";
    return 0;
}
