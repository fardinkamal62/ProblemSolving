#include "vector"
using namespace std;

const int MAX_X = 1e6 + 5;

vector<long long> divisors()
{
    vector<long long> divisor_count(MAX_X + 1, 0);
    for (long long i = 1; i <= MAX_X; i++)
    {
        for (long long j = i; j <= MAX_X; j += i)
        {
            divisor_count[j]++;
        }
    }
    return divisor_count;
}