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

    vector<int> v(n);
    for (auto& x: v)
        cin >> x;

    int cnt = count(v.begin(), v.end(), 2);
    vector<int> pre(n);
    for (int i = 0; i < n; ++i)
    {
        if (i > 0) pre[i] += pre[i - 1];
        pre[i] += int(v[i] == 2);
    }

    for (int i = 0; i < n; ++i)
    {
        if (2 * pre[i] == cnt)
        {
            cout << i + 1 << endl;
            return;
        }
    }

    cout << -1 << endl;
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