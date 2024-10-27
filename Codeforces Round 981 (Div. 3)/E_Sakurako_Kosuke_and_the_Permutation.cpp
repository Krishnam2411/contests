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
    vector<int> a(n), vis(n, 0);
    for (int i = 0; i < n; ++i)
    {
        int t; cin >> t;
        a[t - 1] = i;
    }


    int ans = 0;

    for (int i = 0; i < n; ++i)
    {
        if (vis[i] == 1) continue;
        int cnt = 1;
        int j = a[i];
        vis[i] = 1;
        while (j != i)
        {
            vis[j] = 1;
            j = a[j];
            cnt++;
        }
        ans += (cnt - 1) / 2;
    }
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