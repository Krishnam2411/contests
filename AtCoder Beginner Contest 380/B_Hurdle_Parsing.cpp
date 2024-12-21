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
    string s;
    cin >> s;

    vector<int> a;
    int cnt = 0;
    for (int i = 1; i < s.length(); ++i)
    {
        if (s[i] == '|')
        {
            a.push_back(cnt);
            cnt = 0;
        }
        else
            cnt++;
    }

    for (int i = 0; i < a.size(); ++i)
        cout << a[i] << " \n"[i == a.size()];
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