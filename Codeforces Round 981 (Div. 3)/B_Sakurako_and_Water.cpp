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

    int arr[n][n];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> arr[i][j];
        }
    }
    
    int ans = 0;

    for (int i = 0; i < n; ++i)
    {
        int x = 0, y = i; 
        int temp = 0;
        while (x < n && y < n)
        {
            temp = min(temp, arr[x][y]);
            x++, y++;
        }
        if (temp < 0) ans += abs(temp);
    }
    for (int i = 1; i < n; ++i)
    {
        int x = i, y = 0; 
        int temp = 0;
        while (x < n && y < n)
        {
            temp = min(temp, arr[x][y]);
            x++, y++;
        }
        if (temp < 0) ans += abs(temp);
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