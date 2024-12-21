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

ll XORupto(ll n)
{
    if (n % 4 == 3) return 0;
    if (n % 4 == 2) return n + 1;
    if (n % 4 == 1) return 1;
    return n;
}

ll range(ll n, int k, int i)
{
    if (n <= 0) return 0LL;

    ll ans = XORupto(n);
    ll x = (n >> i) + (n % (1 << i) >= k);
    
    if (x % 2) ans ^= k;
    ans ^= (XORupto(max(x - 1, 0LL)) << i);

    return ans;
}

void solve() 
{
    ll l, r;
    int i, k;
    cin >> l >> r >> i >> k;

    cout << (range(l-1, k, i) ^ range(r, k, i)) << endl;
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