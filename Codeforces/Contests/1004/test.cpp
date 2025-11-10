#include "iostream"
#include "math.h"
#include "string"

using namespace std;

string solve(int a) {
    if (a == 0) return "0"; // Special case if a is 0
    if (a <= 9) return to_string(a); // If a is a single digit, return it
    
    int q = a / 9; // Number of 9's needed
    int r = a % 9; // Remainder
    
    string result = "";
    if (r > 0) {
        result += to_string(r); // Place remainder at the beginning
    }
    result += string(q, '9'); // Append q number of 9's
    
    return result;
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;

        cout << solve(x) << " " << solve(y) << endl;
    }
    
}
