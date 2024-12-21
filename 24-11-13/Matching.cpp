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


void solve(int tc) {
    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(n));
    vector<vector<int>> st(n);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> v[i][j];
            if (v[i][j] == 1) st[i].push_back(j);
        }
    }
    
    int mask = (1 << n) - 1;
    vector dp(n + 1, vector<mint>(mask + 1, 0));
    dp[0][0] = 1;

    for (int i = 0; i < n; ++i) {
        for (auto& j : st[i]) {
            for (int p = 0; p <= mask; ++p) {
                if ((p & (1 << j)) == 0) {
                    dp[i + 1][p | (1 << j)] += dp[i][p];
                }
            }
        }
    }
    
    cout << dp[n][mask] << endl;
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