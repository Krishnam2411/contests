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

    vector<int> a(n), b(n);

    for (auto& x: a) cin >> x;
    for (auto& x: b) cin >> x, x--;

    vector<ll> cost(n, 1e18);
    priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<>> pq;

    pq.push({ 0LL, 0 });

    while (!pq.empty())
    {
        auto [costi, i] = pq.top();
        pq.pop();

        if (cost[i] != 1e18) continue;
        cost[i] = costi;

        pq.push({ cost[i] + a[i], b[i] });
        if (i > 0) pq.push({ cost[i], i - 1 });
    }

    ll sum = 0, ans = 0;

    for (int i = 0; i < n; ++i)
    {
        sum += a[i];
        ans = max(ans, sum - cost[i]);
    }
    
    cout << ans << endl;
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