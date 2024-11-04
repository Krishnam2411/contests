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
    ll n, k;
    cin >> n >> k;
    
    vector<ll> mp(k + 1, 0LL);

    for (int i = 0; i < k; ++i)
    {
        ll a, b;
        cin >> a >> b;
        mp[a] += b;
    }

    sort(mp.rbegin(), mp.rend());

    ll ans = 0;
    for (int i = 0; i < min(n, k); ++i) ans += mp[i];
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