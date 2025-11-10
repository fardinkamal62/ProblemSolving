#include "iostream"
#include "string"

using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    if (n < 3) 
    {
        cout << "No" << endl;
        return 0;
    }
    if (s[n - 3] == 't' && s[n - 2] == 'e' && s[n - 1] == 'a') 
    {
        cout << "Yes" << endl;
    } 
    else 
    {
        cout << "No" << endl;
    }

    return 0;
}
