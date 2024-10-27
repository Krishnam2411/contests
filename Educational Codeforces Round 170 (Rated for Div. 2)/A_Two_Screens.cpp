// Krishnam Maheshwari
// 2212147

#include <iostream>
#include <bits/stdc++.h>

#define MOD 1000000007
using namespace std;

typedef long long int ll;
typedef unsigned long long ull;


void solve() 
{
    string a, b;
    cin >> a >> b;

    int n = a.size(), m = b.size();
    int ans = 0;

    for (int i = 0; i < min(n, m); ++i, --ans) {
        if (a[i] != b[i]) break;
    }

    if (ans < 0) ans++;

    cout << ans + n + m << endl;
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