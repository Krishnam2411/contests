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

    vector<int> a, b;
    for (int i = 0; i < n; ++i)
    {
        int x, y;
        cin >> x >> y;

        if (y)  a.push_back(x);
        else b.push_back(x);
    }

    set<int> y1(a.begin(), a.end()), y2(b.begin(), b.end());

    ll ans = 0;

    for (auto x: a)
    {
        if (y2.count(x - 1) & y2.count(x + 1))
            ans++;
        if (y2.count(x))
            ans += n - 2;
    }
    for (auto x: b)
    {
        if (y1.count(x - 1) & y1.count(x + 1))
            ans++;
    }
    
    cout << ans << endl;
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