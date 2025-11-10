#include <iostream>
using namespace std;

int main()
{
    char a, b, c;
    cin >> a >> b >> c;

    int int_a = (int)a - 48;
    int int_b = (int)b - 48;
    int int_c = (int)c - 48;

    int abc = int_a * 100 + int_b * 10 + int_c;
    int bca = int_b * 100 + int_c * 10 + int_a;
    int cab = int_c * 100 + int_a * 10 + int_b;
    
    int result = abc + bca + cab;
    
    cout << result << endl;

    return 0;
}