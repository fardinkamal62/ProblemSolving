/**
*   author:   @fardinkamal62
*   created:  11/01/2025 18:28
**/

#include "iostream"
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    int rice[N];
    for (int i = 0; i < N; i++) {
        int s;
        cin >> s;
        rice[i] = s;
    }

    int result = 0;
    for (int i = 0; i < N; i++) {
        int a = rice[i];

        for (int j = i + 1; j < N; j++) {
            int b = rice[j];

            if (b >= (a * 2)) result++;
        }
    }

    cout << result;
    return 0;
}
