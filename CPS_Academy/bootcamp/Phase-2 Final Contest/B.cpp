    /**
    *   author:   @fardinkamal62
    **/

    #include<bits/stdc++.h>
    using namespace std;

    int main() {
    #ifdef ONLINEJUDGE
        clock_t tStart = clock();
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

        int tt;
        cin >> tt;

        set<string> result;

        while (tt--) {
            string s;
            cin >> s;

            sort(s.begin(), s.end());

            auto it = unique(s.begin(), s.end());

            s.resize(distance(s.begin(), it));

            result.insert(s);
        }
        cout << result.size() << endl;

    #ifdef ONLINEJUDGE
        fprintf(stderr, "\n>> Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);
    #endif

        return 0;
    }
