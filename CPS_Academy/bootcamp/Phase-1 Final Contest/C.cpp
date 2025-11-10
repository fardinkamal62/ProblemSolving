#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int medians[3];
    
    for (int i = 0; i < 3; i++)
    {
        int nums[3];
        for (int j = 0; j < 3; j++)
        {
            cin >> nums[j];
        }

        sort(nums, nums + 3);
        medians[i] = nums[1];
    }
    
    sort(medians, medians + 3);
    cout << medians[1] << endl;
    
    return 0;
}