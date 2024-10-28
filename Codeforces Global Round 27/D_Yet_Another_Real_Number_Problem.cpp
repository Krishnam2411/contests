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

ll powm(ll x, ll n, ll M) {
    x %= M;
    if (n == 0)
        return 1;
    else if (n == 1)
        return x;
    ll p = powm(x * x, n / 2, M);
    if (n % 2)
        return p * x % M;
    else
        return p;
}

void solve() 
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    ll ans = 0;
    stack<array<ll, 2>> stk;

    for (int i = 0; i < n; ++i)
    {
        ll a2 = a[i], k2 = 0;
        while ((a2 & 1) == 0) a2 >>= 1, k2++;

        while (!stk.empty() && (k2 > 30 || stk.top()[0] < (ll(a2) << k2)))
        {
            auto [a1, k1] = stk.top();
            stk.pop();
            ans = (ans - a1 * powm(2, k1, MOD) % MOD + MOD) % MOD;
            ans = (ans + a1) % MOD;
            k2 += k1;
        }

        stk.push({a2, k2});
        ans = (ans + (a2 * powm(2, k2, MOD)) % MOD) % MOD;
        cout << ans << " \n"[i == n - 1];
    }
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