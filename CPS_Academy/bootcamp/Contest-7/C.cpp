#include "iostream"
#include "algorithm"

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int w = 0; w < n; w++)
    {
        int l;
        cin >> l;

        string s;
        cin >> s;
        transform(s.begin(), s.end(), s.begin(), ::tolower);

        char letters[4] = {'m', 'e', 'o', 'w'};
        int curr_letter = 0;
        bool valid = true;
        
        bool found[4] = {false, false, false, false};
        
        for (int i = 0; i < l; i++)
        {
            if (s[i] == letters[curr_letter]) {
                found[curr_letter] = true;
            }
            else if (curr_letter < 3 && s[i] == letters[curr_letter + 1]) {
                if (!found[curr_letter]) {
                    valid = false;
                    break;
                }
                curr_letter++;
                found[curr_letter] = true;
            }
            else {
                valid = false;
                break;
            }
        }
        
        for (int i = 0; i < 4; i++) {
            if (!found[i]) {
                valid = false;
                break;
            }
        }
        
        cout << (valid ? "YES" : "NO") << endl;
    }

    return 0;
}