// Krishnam Maheshwari
// 2212147
#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;

typedef long long int ll;
typedef unsigned long long ull;

void solve() {
  int n, m;
  cin >> n >> m;

  vector<vector<int>> v(n, vector<int> (m));
  for (int i = 0; i < n; ++i ) {
    for (int j = 0; j < m; ++j) cin >> v[i][j];
  }
  vector<pair<int, int>> dir = {{-1, 0}, {0, -1}, {1, 0}, {0, 1}};

  for (int i = 0; i < n; ++i ) {
    for (int j = 0; j < m; ++j) {
      int mx = 0;
      for (auto [x, y]: dir) {
        if (i+x >= 0 && i+x < n && j+y >= 0 && j+y < m) {
          mx = max(mx, v[i+x][j+y]);
        }
      }
      if (mx < v[i][j]) v[i][j] = mx;
    }
  }

  for (int i = 0; i < n; ++i ) {
    for (int j = 0; j < m; ++j) cout << v[i][j] << " \n"[j == m-1];
  }
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