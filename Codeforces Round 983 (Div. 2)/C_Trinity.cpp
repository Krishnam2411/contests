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

    vector<int> v(n);
    for (auto& x: v) cin >> x;
    
    sort(v.begin(), v.end());
    
    ll ans = n;
    for (ll i = 1; i < n - 1; ++i)
    {
        ll num = ll(v[i] + v[i - 1]);
        ans = min(ans, i - 1 + ll(n - ll(lower_bound(v.begin(), v.end(), ll(num)) - v.begin())));
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