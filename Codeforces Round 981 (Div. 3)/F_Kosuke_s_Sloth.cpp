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

    if (k == 1)
    {
        cout << n % MOD << endl; 
        return;
    }

    array<ll, 2> a = {1, 1};
    ll ans = 0, i = 3, sum = a[0] + a[1];

    while ((sum) % k != 0)
    {
        i++;
        a[0] = a[1] % k;
        a[1] = sum % k;
        sum = (a[0] + a[1]) % k;
    }

    ans = ((i % MOD) * (n % MOD)) % MOD;
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