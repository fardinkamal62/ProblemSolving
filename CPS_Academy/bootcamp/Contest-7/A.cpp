#include "iostream"
#include "vector"

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> words;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        words.push_back(s);
    }

    for (int i = n - 1; i > -1; i--)
    {
        cout << words[i] << '\n';
    }
    return 0;
    
}