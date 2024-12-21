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
    int n; cin >> n;
    set<int> s, t;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
        s.insert(v[i]);
    }

    for (int i = 1; i <= n; ++i)
        if (s.count(i) == 0) t.insert(i);

    for (int i = 0; i < n; ++i)
    {
        if (s.count(v[i]))
        {
            cout << v[i] << " \n"[i == n - 1];
            s.erase(v[i]);
        }
        else
        {
            cout << *t.begin() << " \n"[i == n - 1];
            t.erase(t.begin());
        }
    }
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