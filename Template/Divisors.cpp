#include "vector"
using namespace std;

const int MAX_X = 1e6 + 5;

int main()
{
    vector<int> divisor_count(MAX_X + 1, 0);
    for (int i = 1; i <= MAX_X; i++)
    {
        for (int j = i; j <= MAX_X; j += i)
        {
            divisor_count[j]++;
        }
    }
}