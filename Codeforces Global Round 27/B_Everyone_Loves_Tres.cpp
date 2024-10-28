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

    if (n == 1 || n == 3) cout << -1 << endl;
    else if (n % 2 == 0)
    {
        for (int i = 2; i < n; i++) cout << "3";
        cout << "66" << endl;
    }
    else
    {
        for (int i = 5; i < n; i++) cout << "3";
        cout << "36366" << endl;
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