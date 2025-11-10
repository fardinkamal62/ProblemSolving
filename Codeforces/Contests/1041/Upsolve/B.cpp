#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, x;
        cin >> n >> x;
        string s;
        cin >> s;
        
        // Find L: leftmost wall that Hamid would reach if moving left
        int L = 0; // If no wall found, L = 0 (can escape left immediately)
        for (int i = x - 2; i >= 0; i--) { // Check positions x-1, x-2, ..., 1
            if (s[i] == '#') {
                L = i + 1; // Convert to 1-indexed position
                break;
            }
        }
        
        // Find R: rightmost wall that Hamid would reach if moving right  
        int R = n + 1; // If no wall found, R = n+1 (can escape right immediately)
        for (int i = x; i < n; i++) { // Check positions x+1, x+2, ..., n
            if (s[i] == '#') {
                R = i + 1; // Convert to 1-indexed position
                break;
            }
        }
        
        // Mani's two options and the resulting minimum moves for Hamid
        int option1 = min(x, n - R + 2);           // Mani sets L = x-1
        int option2 = min(L + 1, n - x + 1);       // Mani sets R = x+1
        
        // Mani chooses the option that maximizes Hamid's moves
        int result = max(option1, option2);
        
        cout << result << "\n";
    }
    return 0;
}