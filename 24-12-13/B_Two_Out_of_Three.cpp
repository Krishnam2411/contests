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

    map<int, int> mp;
    vector<int> v(n);
    for (auto& x: v)
    {
        cin >> x;
        mp[x]++;
    }

    int x = -1, y = -1;
    for (auto [m, f]: mp)
    {
        if (x == -1 && f > 1)
            x = m;
        else if (y == -1 && f > 1)
            y = m;
    }

    if (x == -1 || y == -1)
    {
        cout << "-1\n";
        return;
    }

    vector<int> res(n, 1);
    for (int i = 0; i < n; ++i)
    {
        if (v[i] == x)
        {
            res[i] = 3;
            break;
        }
    }
    for (int i = 0; i < n; ++i)
    {
        if (v[i] == y)
        {
            res[i] = 2;
            break;
        }
    }

    for (int i = 0; i < n; ++i)
        cout << res[i] << " \n"[i == n - 1];
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