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

    int i, x, y;

    int mn = int(2e9);
    for (i = n - 1; i > 0; --i)
    {
        if (v[i - 1] > v[i] || (mn != int(2e9) && mn > v[i - 1]))
            break;
        if (v[i - 1] - v[i] < mn)
        {
            mn = v[i - 1] - v[i];
            x = i;
            y = i + 1;
        }
    }
    if (mn == 2e9 || mn > v[i]) cout << (is_sorted(v.begin(), v.end()) ? "0\n" : "-1\n");
    else
    {   
        cout << i << endl;
        for (int j = 0; j < i; ++j)
        {
            cout << j + 1 << " " << x << " " << y << " \n";
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