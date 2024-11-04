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

    vector<ll> v(n);
    for (auto& x: v) cin >> x;

    if (n == 1) {
        cout << 1 << endl;
        return;
    }

    if (n % 2)
    {
        ll mn = (ll)1e18;
        for (int i = 0; i < n; i += 2)
        {
            ll x = 1, y = 1;
            for (int j = 0; j < i; j += 2)
            {
                x = max(x, v[j + 1] - v[j]);
            }
            for (int j = i + 1; j < n; j += 2)
            {
                y = max(y, v[j + 1] - v[j]);
            }
            mn = min(mn, max(x, y));
        }
        cout << mn << endl;
    }
    else
    {
        ll mx = 0;
        for (int i = 0; i < n; i += 2)
        {
            mx = max(mx, v[i + 1] - v[i]);
        }

        cout << mx << endl; 
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