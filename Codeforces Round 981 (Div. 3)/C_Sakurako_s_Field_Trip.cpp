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
    vector<int> a(n);
    for (auto& x: a)
    {
        cin >> x;
    }

    int ans = 0;

    for (int i = 1; i < n / 2; ++i)
    {
        if (a[i] != a[n - i - 1] && (a[i] == a[i-1] || a[n - i - 1] == a[n - i]))
        {
            swap(a[i], a[n - i - 1]);
        }
    }

    for (int i = 1; i < n; ++i) if (a[i] == a[i-1]) ans++;

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