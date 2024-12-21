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

struct mint {
  ll x;
  mint():x(0){}
  mint(ll x):x((x%MOD+MOD)%MOD){}
  // mint(ll x):x(x){}
  mint& fix() { x = (x%MOD+MOD)%MOD; return *this;}
  mint operator-() const { return mint(0) - *this;}
  mint& operator+=(const mint& a){ if((x+=a.x)>=MOD) x-=MOD; return *this;}
  mint& operator-=(const mint& a){ if((x+=MOD-a.x)>=MOD) x-=MOD; return *this;}
  mint& operator*=(const mint& a){ (x*=a.x)%=MOD; return *this;}
  mint operator+(const mint& a)const{ return mint(*this) += a;}
  mint operator-(const mint& a)const{ return mint(*this) -= a;}
  mint operator*(const mint& a)const{ return mint(*this) *= a;}
  bool operator<(const mint& a)const{ return x < a.x;}
  bool operator==(const mint& a)const{ return x == a.x;}
};
istream& operator>>(istream&i,mint&a){i>>a.x;return i;}
ostream& operator<<(ostream&o,const mint&a){o<<a.x;return o;}



void solve(int tc) 
{
    int n; cin >> n;
    vector<vector<int>> adj(n);

    for (int i = 0; i < n - 1; ++i)
    {
        int x, y;
        cin >> x >> y;
        adj[x - 1].push_back(y - 1);
        adj[y - 1].push_back(x - 1);
    }

    vector dp(n, vector<mint> (2));
    auto dfs = [&](auto&& dfs, int src, int p) -> void
    {
        mint a = 1, b = 1;
        for (auto& x: adj[src])
        {
            if (x == p) continue;
            dfs(dfs, x, src);
            a *= dp[x][0] + dp[x][1];
            b *= dp[x][0];
        }
        
        dp[src][0] = a;
        dp[src][1] = b;
    };

    dfs(dfs, 0, -1);

    mint ans = dp[0][1] + dp[0][0];
    cout << ans << endl;
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