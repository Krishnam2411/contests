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
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (auto& x: v)
        cin >> x;

    int ans = 5;
    if (k == 4)
    {
        for (auto x: v)
            ans = min(ans, (x % k == 0) ? 0 : k - (x % k));
        
        int a = 0;
        for (int i = 0; i < n; ++i)
        {
            a += int(v[i] % 2 == 0);
        }

        ans = min(ans, max(0, 2 - a));
    }
    else
    {
        for (auto x: v)
            ans = min(ans, (x % k == 0) ? 0 : k - (x % k));
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