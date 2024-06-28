// Krishnam Maheshwari
// 2212147
#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;

void solve() {
  string a, b;
  cin >> a >> b;

  int n = a.length(), m = b.length(), c = 0;
  for (int i = 0; i < m; ++i) {
    int k = i;
    for (int j = 0; j < n; ++j) {
      if (k < m && a[j] == b[k]) k++;
    }
    c = max(c, k - i);
  }

  cout << n + m - c << endl;
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