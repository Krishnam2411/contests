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

    set<int> s;
    for (int i = 1; i <= n; ++i) s.insert(i);
    int k = 0;

    if (n % 2)
    {
        s.erase(n);
        s.erase(n - 1);
        s.erase(1);
        s.erase(3);
        
        cout << ((n & (n - 1)) | 1) << endl;
        for (auto& x: s) cout << x << " ";
        cout << "1 3 " << n - 1 << " " << n << endl;
    }
    else
    {
        int t = (1 << (int)log2(n)) - 1;
        if (t == n-1)
        {
            s.erase(n);
            s.erase(n - 1);
            s.erase(n - 2);
            s.erase(1);
            s.erase(3);

            cout << (n | ((n - 2) & (n - 1)) | 1) << endl;
            for (auto& x: s) cout << x << " ";
            cout << "1 3 " << n - 2 << " " << n - 1 << " " << n << endl;
        }
        else
        {
            s.erase(t);
            s.erase(n - 1);
            s.erase(n);

            cout << ((n & (n - 1)) | t) << endl;
            for (auto& x: s) cout << x << " ";
            cout << n - 1 << " " << n << " " << t << endl;
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
