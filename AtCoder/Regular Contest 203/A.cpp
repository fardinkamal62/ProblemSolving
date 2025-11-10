#include "iostream"
#include "string"

using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;

    string s;
    cin >> s;

    for (int i = a; i <= (n - b - 1); i++) 
    {
        cout << s[i];
    }
    cout << endl;

    return 0;
}
