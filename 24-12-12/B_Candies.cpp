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

    if (n % 2 == 0)
    {
        cout << -1 << newline;
        return;
    }
    
    vector<int> v;

    do
    {
        n >>= 1;
        if (1 & n)
        {
            v.push_back(2);
        }
        else
        {
            v.push_back(1);
        }
    }
    while (n > 1);

    cout << v.size() << newline;
    for (int i = v.size() - 1; i >= 0; --i)
        cout << v[i] << " \n"[i == 0];
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