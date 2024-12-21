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
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x: a) cin >> x;

    vector dp(n + 1, vector<int> (n + 1, 0));

    for (int i = 1; i <= n; ++i) dp[i][i] = a[i - 1];

    for (int i = n - 1; i > 0; --i)
    {
        for (int j = i, x = 1, y = n - i + 1; j > 0; --j, x++, y++)
        {
            if (y > 1 && x < n)
            {
                dp[x][y] = max(dp[x][y], (dp[x + 1][y] ^ dp[x][y - 1]));
            }
        }
    }
    
    for (int i = n - 1; i > 0; --i)
    {
        for (int j = i, x = 1, y = n - i + 1; j > 0; --j, x++, y++)
        {
            if (y > 1 && x < n)
            {
                dp[x][y] = max({dp[x][y], dp[x + 1][y], dp[x][y - 1]});
            }
        }
    }

    int q; cin >> q;
    for (int i = 0; i < q; ++i)
    {
        int a, b;
        cin >> a >> b;

        cout << dp[a][b] << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    // cin >> tc;
    for (int i = 1; i <= tc; ++i)
    {
        solve(tc);
    }
    return 0;
}