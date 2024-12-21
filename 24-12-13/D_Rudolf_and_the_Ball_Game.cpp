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
    int n, m, x;
    cin >> n >> m >> x;

    vector<bool> v(n, false), tmp(n);
    v[x - 1] = true;

    while (m--)
    {
        int r; cin >> r;
        char c; cin >> c;

        fill(tmp.begin(), tmp.end(), false);

        for (int i = 0; i < n; ++i)
        {
            if (v[i])
            {
                if (c == '0' or c == '?') tmp[(i + r) % n] = true;
                if (c == '1' or c == '?') tmp[(i - r + n) % n] = true;
            }
        }

        v = tmp;
    }

    cout << count(v.begin(), v.end(), true) << endl;
    for (int i = 0; i < n; ++i)
        if (v[i]) cout << i + 1 << " ";
    cout << endl;
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