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
    int n; cin >> n;
    vector<ll> arr(n);
    for (auto &x: arr) cin >> x;

    ll res = n;
    for (int i = 0; i < n; ++i)
    {
        ll cnt = 0;
        for (int j = i + 1; j < n; ++j)
        {
            if (arr[j] > arr[i])
            {
                cnt++;
            }
        }

        res = min(res, cnt + i);
    }

    cout << res << endl;
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