#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main()
{
    fastIO();
    
    int n;
    cin >> n;

    vector<int> a(n);

    int first_index = -1;
    int first_value = INT_MAX;
    int second_index = -1;
    int second_value = INT_MAX;
    int third_index = -1;
    int third_value = INT_MAX;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] < first_value) {
            third_value = second_value;
            third_index = second_index;
            second_value = first_value;
            second_index = first_index;
            first_value = a[i];
            first_index = i + 1;
        } else if (a[i] < second_value) {
            third_value = second_value;
            third_index = second_index;
            second_value = a[i];
            second_index = i + 1;
        } else if (a[i] < third_value) {
            third_value = a[i];
            third_index = i + 1;
        }
    }

    cout << first_index << " " << second_index << " " << third_index << endl;
    
    return 0;
}