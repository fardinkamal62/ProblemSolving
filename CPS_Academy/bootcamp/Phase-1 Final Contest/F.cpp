#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    string s, t;
    cin >> s >> t;

    // Check if s is a prefix of t
    bool isPrefix = true;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != t[i])
        {
            isPrefix = false;
            break;
        }
    }

    // Check if s is a suffix of t
    bool isSuffix = true;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != t[m - n + i])
        {
            isSuffix = false;
            break;
        }
    }

    // Output based on conditions
    if (isPrefix && isSuffix)
        cout << 0 << endl;
    else if (isPrefix && !isSuffix)
        cout << 1 << endl;
    else if (!isPrefix && isSuffix)
        cout << 2 << endl;
    else
        cout << 3 << endl;

    return 0;
}