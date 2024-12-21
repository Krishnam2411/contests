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
    string s;
    cin >> n >> s;

    int ans = 0;
    int cnt = 1;
    vector<int> v;
    for (int i = 1; i < n; ++i)
    {
        if (s[i] == s[i - 1])
        {
            cnt++;
        }
        else
        {
            v.push_back(cnt);
            cnt = 1;
        }
    }
    if (v.empty())
    {
        cout << (cnt + 2) / 3 << endl;
        return;
    }
    if (s[0] != s[n - 1]) v.push_back(cnt);
    else v[0] += cnt;

    for (auto x: v) ans += (x / 3);
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