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

  ll n, k, x;
  cin >> n >> k >> x;

  vector<ll> a(n);
  for (int i = 0; i < n; ++i)
    cin >> a[i];

  sort(a.begin(), a.end());

  vector<ll> gaps;
  for (int i = 0; i < n - 1; ++i)
  {
    ll diff = a[i + 1] - a[i];
    if (diff > x)
    {
      ll students_needed = (diff - 1) / x;
      gaps.push_back(students_needed);
    }
  }

  sort(gaps.begin(), gaps.end());

  ll groups = gaps.size() + 1;
  for (ll students_needed : gaps)
  {
    if (k >= students_needed)
    {
      k -= students_needed;
      groups--;
    }
    else
    {
      break;
    }
  }

  cout << groups << endl;

  return 0;
}