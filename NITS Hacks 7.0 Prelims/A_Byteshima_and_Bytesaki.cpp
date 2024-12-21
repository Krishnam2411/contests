// TEAM TRASHCODERS

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

void solve(ll n, ll m, ll r, ll R) 
{
    if (n < m) return solve(m, n, r, R);
    if (r > R) return solve(m, n, R, r);
    ll c = 3 * (r + 1);

    if ((m < 2 * R + 1) || (3 * (r + R) + 4 > n + m)) cout << -1 << endl;
    else cout << max(c, R + 1) + 2 * r + R + 3 << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin>>tc;
    while(tc--){
        ll n, m, r1, r2;
        cin >> n >> m >> r1 >> r2;
        solve(n, m, r1, r2);
    }
    return 0;
}