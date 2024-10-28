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
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);
    for (auto& x: a) cin >> x;
    for (auto& x: b) cin >> x;

    if (*max_element(a.begin(), a.end()) > b[0])
    {
        cout << -1 << endl;
        return;
    }

    vector<int> pre(n + 1);
    for (int i = 1; i <= n; ++i) pre[i] = pre[i - 1] + a[i - 1];

    // (k = j)
    // BASE: dp[0] = 0
    // STATE: dp[i] -> mincost(a(0,1, .. i-1))
    // find(pre(a[x..i])) dp[i] = dp[x] + m - j - 1

    vector<int> dp(n + 1, INT_MAX);
    dp[0] = 0;

    for (int j = 0; j < m; ++j)
    {
        for (int i = 1, x = 0; i <= n; ++i)
        {
            while (pre[i] - pre[x] > b[j]) x++;
            dp[i] = min(dp[i], dp[x] + m - j - 1);
        }
    }

    cout << dp[n] << endl;
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