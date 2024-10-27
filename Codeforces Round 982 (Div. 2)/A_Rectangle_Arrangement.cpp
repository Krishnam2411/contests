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
    int x = 0, y = 0;
    for (int i = 0; i < n; ++i)
    {
        int t1, t2; cin >> t1 >> t2;
        x = max(x, t1);
        y = max(y, t2);
    }

    cout << 2 * (x + y) << endl;
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