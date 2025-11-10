/**
 *   author:   @fardinkamal62
 **/

#include "iostream"
#include "string"
#include "set"

using namespace std;

int main()
{
#ifdef ONLINEJUDGE
    clock_t tStart = clock();
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);
    set<char> char_set;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
            continue;
        else
            char_set.insert(tolower(s[i]));
    }

    cout << (char_set.size() >= 26 ? "pangram" : "not pangram") << endl;

#ifdef ONLINEJUDGE
    fprintf(stderr, "\n>> Runtime: %.10fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);
#endif

    return 0;
}
