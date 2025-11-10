#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n = 0, result = 1000;
    cin >> n;
    for (int i = 0; i < n; i++){
        int salami;
        cin >> salami;
        result += salami;
    }

    cout << result;
    return 0;
}
