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

    ll n, k;
    cin >> n >> k;

    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // Calculate sum of first week
    ll week_sum = 0;
    for (ll i = 0; i < k; i++)
    {
        week_sum += a[i];
    }

    // Total sum of all weeks
    ll total_sum = week_sum;

    // Slide the window: remove first element, add next element
    for (ll i = k; i < n; i++)
    {
        week_sum += a[i] - a[i - k];
        total_sum += week_sum;
    }

    // Number of weeks
    ll num_weeks = n - k + 1;

    // Calculate average
    double average = (double)total_sum / num_weeks;

    cout << fixed << setprecision(10) << average << endl;

    return 0;
}