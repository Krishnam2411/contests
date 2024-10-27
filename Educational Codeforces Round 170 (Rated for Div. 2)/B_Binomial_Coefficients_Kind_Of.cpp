// Krishnam Maheshwari
// 2212147

#include <iostream>
#include <bits/stdc++.h>

#define MOD 1000000007
using namespace std;

typedef long long int ll;
typedef unsigned long long ull;

long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

void solve() 
{
    int n; cin >> n;

    vector<int> N(n), K(n);

    for (auto& x: N) cin >> x;
    for (auto& x: K) cin >> x;

    for (int i = 0; i < n; ++i)
    {
        cout << binpow(2, K[i], MOD) << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    // cin>>tc;
    while(tc--){
      solve();
    }
    return 0;
}