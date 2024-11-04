// Krishnam Maheshwari
// 2212147

#include <iostream>
#include <bits/stdc++.h>

#ifndef ONLINE_JUDGE
#include "debug.cpp"
#else
#define debug(...)
#define debugArr(...)
#endif

#define MOD 1000000007
#define INF 1000000000
using namespace std;

typedef long long int ll;
typedef unsigned long long ull;


int chk(string& s)
{
    int cnt = 0, n = s.length();
    for (int i = 0; i < n; ++i)
    {
        //1543
        if (s[i] == '1' && s[(i + 1) % n] == '5' && s[(i + 2) % n] == '4' && s[(i + 3) % n] == '3')
            cnt++;
    }
    return cnt;
}

void solve() 
{
    int n, m;
    cin >> n >> m;

    vector<string> v(n);
    for (auto& x: v) cin >> x;

    int a = min(n, m) / 2;

    int r = n - 1, c = m - 1, x = 0, y = 0;
    int ans = 0;
    while(a--)
    {
        string p = "";
        for (int i = y; i < c; ++i) p += v[x][i];
        for (int i = x; i < r; ++i) p += v[i][c];
        for (int i = c; i > y; --i) p += v[r][i];
        for (int i = r; i > x; --i) p += v[i][y];
        r--, c--, x++, y++;

        ans += chk(p);
    }

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin>>tc;
    while(tc--){
      solve();
    }
    return 0;
}