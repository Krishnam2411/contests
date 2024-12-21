// Krishnam Maheshwari
// 2212147

#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.cpp"
#else
#define debug(...)
#define debugArr(...)
#endif

typedef long long int ll;
typedef unsigned long long ull;
typedef long double ld;

#define MOD 1000000007
#define _MOD 998244353
#define INF 1000000000000000000
#define EPS 0.000000001
#define PI 3.141592653589793238462
#define newline "\n"
#define set_bits __builtin_popcountll


void solve(int tc) 
{
    int n, m;
    cin >> n >> m;

    vector<int> seat(m, 0), pre(m, 0);
    int l = 0, r = 0, total = 0;

    for (int i = 0; i < n; ++i)
    {  
        int x;
        cin >> x;

        if (x == -1)
        {
            l++;
        }
        else if (x == -2)
        {
            r++;
        }
        else
        {
            if (seat[x - 1] == 0)
            {
                seat[x - 1]++;
                total++;
            }
        }
    }
    
    pre[0] = seat[0];
    for (int i = 1; i < m; ++i)
    {
        pre[i] = seat[i] + pre[i - 1];
    }

    int cnt = 0;
    for (int i = 0; i < m; ++i)
    {
        if (seat[i] > 0)
        {
            int x = 0, y = 0;
            if (i > 0) x = pre[i - 1];
            y = total - pre[i];

            cnt = min(m, max(cnt, 1 + min(m - i - 1, r + y) + min(i, l + x)));
        }
    }

    cout << max({min(r + total, m), min(l + total, m), cnt}) << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int i = 1; i <= tc; ++i)
    {
        solve(tc);
    }
    return 0;
}