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

int f(char x, char y)
{
    if (x != y) return 2;
    return 1;
}

void solve(int tc) 
{
    int n;
    cin >> n;

    string s, t;
    cin >> s >> t;

    int ans = 0;

    for (int i = 0; i < n; ++i)
    {
        if (s[i] != t[i])
        {
            ans += 2;
        }
        else if (s[i] == '0')
        {
            ans += 1;
            if (i < n - 1 && s[i + 1] == t[i + 1] && s[i + 1] == '1')
            {
                ans += 1;
                i++;
            }
        }
        else if (i < n - 1 && s[i + 1] == t[i + 1] && s[i + 1] == '0')
        {
            ans += 2;
            i++;
        }
    }

    cout << ans << newline;
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