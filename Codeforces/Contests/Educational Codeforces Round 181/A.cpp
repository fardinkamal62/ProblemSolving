#include "iostream"
#include "string"
#include "algorithm"
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--)
    {
        string input;
        cin >> input;

        sort(input.rbegin(), input.rend());
        
        cout << input << endl;
    }
    return 0;
}