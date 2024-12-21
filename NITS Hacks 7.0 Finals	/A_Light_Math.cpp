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
    ll n, t, k;
    cin >> n >> t >> k;

    ll x = 2 * k - 3;
    ll y = 2 * n - 1;
    ll z = 2 * k - 2;
    
    if (n < k && t >= 3 && t <= y) cout << "YES\n";
    else if (n >= 2 * k && t <= z) cout << "YES\n";
    else if (n == 2 * k - 1 && t > 0 && t <= z) cout << "YES\n";
    else if (n >= k && t > 0 && t <= x) cout << "YES\n";
    else cout << "NO\n";
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