// Krishnam Maheshwari
// 2212147

#include <iostream>
#include <bits/stdc++.h>

#ifndef ONLINE_JUDGE
#include "debug.cpp"
#else
#define debug(...)
#define debugArr(...)
#endif

#define MOD 1000000007
#define INF 1000000000
using namespace std;

typedef long long int ll;
typedef unsigned long long ull;


void solve() 
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto& x: a) cin >> x;

    vector dp(n + 1, vector<int> (3, -INF));
    dp[0][0] = 0;

    for (int i = 1; i <= n; ++i)
    {
        if (dp[i - 1][0] < a[i - 1]) dp[i][0] = dp[i - 1][0] + 1;
        else if (dp[i - 1][0] > a[i - 1]) dp[i][0] = dp[i - 1][0] - 1;
        else dp[i][0] = dp[i - 1][0];

        dp[i][1] = max(dp[i - 1][1], dp[i - 1][0]);

        dp[i][2] = max(dp[i - 1][2], dp[i - 1][1]);

        if (dp[i][2] < a[i - 1]) dp[i][2]++;
        else if (dp[i][2] > a[i - 1]) dp[i][2]--;
    }

    cout << max(dp[n][1], dp[n][2]) << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin>>tc;
    while(tc--){
      solve();
    }
    return 0;
}