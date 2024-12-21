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
    ll n;
    cin >> n;

    vector<ll> v(n);
    for (auto& x: v)
        cin >> x;

    sort(v.begin(), v.end());

    ll d = 0;
    for (int i = 1; i < n; ++i)
        d = gcd(d, v[i] - v[i - 1]);
    
    ll ans = 0;
    if (d > 0)
    {
        for (int i = 0; i < n; ++i)
            ans += ((v[n - 1] - v[i]) / d);
    }

    set<ll> s(v.begin(), v.end());
    ll a = int(1e9 + 7);
    for (int i = 1; i < n; ++i)
    {
        if (s.count(v[n - 1] - i * d) == 0)
        {
            a = i;
            break;
        }
    }

    cout << ans + min(n, a) << endl;
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