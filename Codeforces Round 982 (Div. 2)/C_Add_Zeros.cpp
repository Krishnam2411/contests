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
    int n; cin >> n;
    vector<ll> v(n);
    for (auto& x: v) cin >> x;

    map<ll, vector<ll>> mp;
    for (int i = 0; i < n; ++i)
    {
        mp[i + v[i]].push_back(v[i] + 2 * i);
    }
    ll mx = n;
    map<ll, int> vis; 

    auto dfs = [&](auto &&dfs, ll u) -> void
    {
        if (vis[u] == 1) return;
        mx = max(mx, u);
        vis[u] = 1;

        for (auto& v: mp[u])
        {
            dfs(dfs, v);
        }
    };
    dfs(dfs, n);

    cout << mx << endl;
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