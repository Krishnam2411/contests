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
    int n, k;
    cin >> n >> k;

    if (n == 1)
    {
        cout << 1 << endl;
        cout << 1 << endl;
    }
    else if ((k == n || k == 1))
    {
        cout << -1 << endl;
    }
    else
    {
        cout << 3 << endl;
        if (k % 2)
        {
            cout << "1 " << k - 1 << " " << k + 2 << endl;
        }
        else
        {
            cout << "1 " << k << " " << k + 1 << endl;
        }
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