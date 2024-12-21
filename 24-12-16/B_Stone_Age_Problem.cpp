

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
    ll n, q;
    cin >> n >> q;

    vector<pair<ll, ll>> upd(n, {0, -1});
    ll sum = 0;

    for (int i = 0; i < n; ++i)
    {
        cin >> upd[i].first;
        sum += upd[i].first;
    }

    pair<ll, ll> all = {0, -1};

    for (int i = 1; i <= q; ++i)
    {
        ll j; cin >> j;

        if (j == 1)
        {
            ll idx, x;
            cin >> idx >> x;
            idx--;

        
            if (all.second > upd[idx].second)
            {
                sum = sum + x - all.first;
            }
            else
            {
                sum = sum + x - upd[idx].first;
            }

        
            upd[idx].first = x;
            upd[idx].second = i;
        }
        else
        {
            ll x; cin >> x;
            sum = n * x;
            all.first = x;
            all.second = i;
        }

        cout << sum << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;

    for (int i = 1; i <= tc; ++i)
    {
        solve(tc);
    }
    return 0;
}
