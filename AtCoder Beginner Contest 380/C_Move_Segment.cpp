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
    int n, k, cnt = 0;
    string s;
    cin >> n >> k >> s;

    s.push_back('0');
    int i = 0, j = 0;

    for (i = 0; i <= n; ++i)
    {
        while (s[i] == '0') i++;
        cnt++;
        while(s[i] == '1') i++;
        if (k == cnt) break;
        if (k - 1 == cnt) j = i;
    }

    s.pop_back();
    reverse(s.begin() + j, s.begin() + i);

    cout << s << endl;
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