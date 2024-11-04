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
    int n, k, q;
    cin >> n >> k >> q;
    vector<vector<int>> a(k);
    for (int i = 0; i < n; ++i) 
    {
        for (int j = 0; j < k; ++j)
        {
            int t;
            cin >> t;
            a[j].push_back(t);
            if (i > 0)
            {
                a[j][i] = a[j][i] | a[j][i - 1];
            }
        }
    }

    while (q--)
    {
        int m;
        cin >> m;

        int x = 0, y = n - 1;
        while (m--)
        {
            int r, c;
            char o;
            cin >> r >> o >> c;

            if (o == '<')
            {
                int it = (lower_bound(a[r - 1].begin() + x, a[r - 1].begin() + y + 1, c) - a[r - 1].begin());
                y = min(y, it-1);
            }
            else
            {
                int it = (lower_bound(a[r - 1].begin() + x, a[r - 1].begin() + y + 1, c + 1) - a[r - 1].begin());
                x = max(x, it);
            }
        }

        if (x <= y) cout << x + 1 << endl;
        else cout << -1 << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    // cin>>tc;
    while(tc--){
      solve();
    }
    return 0;
}