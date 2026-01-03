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
    
    map<int, int> likeCount;
    map<int, int> reachedAt;
    
    for (int i = 1; i <= n; i++)
    {
        int photo;
        cin >> photo;
        likeCount[photo]++;
        reachedAt[photo] = i;
    }
    
    int winner = -1;
    int maxLikes = 0;
    int earliestTime = INT_MAX;
    
    for (auto& [photo, count] : likeCount)
    {
        if (count > maxLikes || (count == maxLikes && reachedAt[photo] < earliestTime))
        {
            maxLikes = count;
            earliestTime = reachedAt[photo];
            winner = photo;
        }
    }
    
    cout << winner << endl;
    
    return 0;
}