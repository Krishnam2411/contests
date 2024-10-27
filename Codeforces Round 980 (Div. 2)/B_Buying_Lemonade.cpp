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
    vector<ll> a(n + 1, 0);
    for(int i = 1; i <= n; i++) cin >> a[i];

    sort(a.begin() + 1, a.end());
    int opt = k;

    for (int i = 1; i <= n; i++)
    {
        ll t = 1LL * (n - i + 1) * (a[i] - a[i - 1]);
        if (k > t)
        {
            k -= t;
            opt++;
        }
        else break;
    }

    cout << opt << endl;
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