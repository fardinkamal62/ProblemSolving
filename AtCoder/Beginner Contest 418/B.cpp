#include "iostream"
#include "string"
#include "iomanip"

using namespace std;

int main()
{
    string s;
    cin >> s;

    int first_t_index = -1;
    int last_t_index = -1;
    int number_of_t = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 't')
        {
            if (first_t_index == -1)
            {
                first_t_index = i;
            }
            last_t_index = i;
            number_of_t++;
        }
    }
    
    if (first_t_index == -1 || last_t_index == -1 || first_t_index == last_t_index)
    {
        cout << "0.00000000000000000" << endl;
        return 0;
    }
    cout << fixed << setprecision(17) << (long double)(number_of_t - 2) / (long double)(last_t_index - first_t_index - 1) << endl;


    return 0;
}
