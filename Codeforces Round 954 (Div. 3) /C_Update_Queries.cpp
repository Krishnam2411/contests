// Krishnam Maheshwari
// 2212147
#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;

void solve() {
  int n, m;
  cin >> n >> m;
  string s;
  cin >> s;
  set<int> st;
  for (int i = 0; i < m; ++i) {
    int tmp; cin >> tmp;
    st.insert(tmp);
  }
  string c;
  cin >> c;
  sort(c.begin(), c.end());
  
  int j = 0;
  for (auto i : st) {
    s[i-1] = c[j++];
  }
  cout << s << endl;
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