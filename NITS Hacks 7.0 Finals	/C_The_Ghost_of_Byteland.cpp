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

bool chk(ll m, ll n)
{
    double x = (double(m) * m) / sqrt(8);
    // double x = (double(m) * ((double(m)) / sqrt(2) + sqrt(2) - 1))/4;

    return x >= n;
}

void solve() 
{
    ll n;
    cin >> n;

    ll l = 1, r = 2 * n, mid, ans;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        
        if (chk(mid, n))
        {
            r = mid - 1;
            ans = min(ans, mid);
        }
        else
        {
            l = mid + 1;
        }
    }

    cout << l << endl;
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