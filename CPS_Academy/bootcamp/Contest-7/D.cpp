#include "iostream"
#include <string>

using namespace std;

int main()
{
    string s1, s2, s3;
    getline(cin, s1);
    getline(cin, s2);
    getline(cin, s3);
    
    int first_line = 0;
    int second_line = 0;
    int third_line = 0;

    
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] == 'a' || s1[i] == 'e' || s1[i] == 'i' || s1[i] == 'o' || s1[i] == 'u')
        {
            first_line++;
        }
    }

    for (int i = 0; i < s2.size(); i++)
    {
        if (s2[i] == 'a' || s2[i] == 'e' || s2[i] == 'i' || s2[i] == 'o' || s2[i] == 'u')
        {
            second_line++;
        }
    }

    for (int i = 0; i < s3.size(); i++)
    {
        if (s3[i] == 'a' || s3[i] == 'e' || s3[i] == 'i' || s3[i] == 'o' || s3[i] == 'u')
        {
            third_line++;
        }
    }

    if (first_line == 5 && second_line == 7 && third_line == 5)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}