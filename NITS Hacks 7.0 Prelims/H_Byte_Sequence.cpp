// TEAM TRASHCODERS

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

    if (n % 2)
    {
        for (int i = 1; i < n - 2; ++i) cout << "1 ";
        cout << "2 1 " << n << endl;
    }
    else
    {
        for (int i = 1; i < n - 1; ++i) cout << "1 ";
        cout << "2 " << n << "\n";
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