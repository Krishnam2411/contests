// Krishnam Maheshwari
// 2212147
#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;

typedef long long int ll;
typedef unsigned long long ull;

void solve() {
  int a, b, c;
  cin >> a >> b >> c;

  int ans = max({a, b, c}) - min({a, b, c});
  cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin>>tc;
    while(tc--){
      solve();
    }
    return 0;
}