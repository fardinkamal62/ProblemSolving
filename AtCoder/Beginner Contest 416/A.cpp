#include "iostream"
#include "string"

using namespace std;

int main()
{
    int n, l, r;
    cin >> n >> l >> r;

    string s;
    cin >> s;

    bool result = 1;
    for (int i = 0; i < n; i++)
    {
        if (i >= l - 1 && i <= r - 1)
        {
            if (s[i] == 'x')
            {
                result = 0;
                break;
            }
        }
    }
    if (result) cout << "Yes" <<endl;
    else cout << "No" << endl;

    return 0;
}
