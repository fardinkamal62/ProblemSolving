/**
*   author:   @fardinkamal62
**/

#include<bits/stdc++.h>
using namespace std;


vector<unsigned long long> memo;
vector<int> done;

unsigned long long digit_sum(unsigned long long x) {
    unsigned long long s = 0;
    while (x) {
        s += x % 10;
        x /= 10;
    }
    return s;
}

unsigned long long getA(int i) {
    if (done[i]) return memo[i];
    unsigned long long sum = 0;
    for (int j = 0; j < i; ++j) {
        sum += digit_sum(getA(j));
    }
    memo[i] = sum;
    done[i] = 1;
    return memo[i];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    memo.assign(n + 1, 0);
    done.assign(n + 1, 0);

    memo[0] = 1;
    done[0] = 1;

    cout << getA(n) << "\n";
    return 0;
}
