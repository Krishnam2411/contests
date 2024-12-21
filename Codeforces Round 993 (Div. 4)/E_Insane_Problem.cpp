// Krishnam Maheshwari
// 2212147

#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.cpp"
#else
#define debug(...)
#define debugArr(...)
#endif

typedef long long int ll;
typedef unsigned long long ull;
typedef long double ld;

#define MOD 1000000007
#define _MOD 998244353
#define INF 1000000000000000000
#define EPS 0.000000001
#define PI 3.141592653589793238462
#define newline "\n"
#define set_bits __builtin_popcountll


void solve(int tc) 
{
    ll k, l1, l2, r1, r2;
    cin >> k >> l1 >> r1 >> l2 >> r2;

    ll K = 1, ans = 0;
    for (ll K = 1; K <= r2; K *= k)
    {
        ll l = (l2 - 1) / K + 1, r = r2 / K;
        ans += max(min(r, r1) - max(l, l1) + 1, 0LL);
    }

    cout << ans << newline;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int i = 1; i <= tc; ++i)
    {
        solve(tc);
    }
    return 0;
}