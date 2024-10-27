// Krishnam Maheshwari
// 2212147
#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;

typedef long long int ll;
typedef unsigned long long ull;

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;

  int result = 300;
  for (int i = 0; i < n-1; ++i) {
    int ans = 0;
    for (int j = 0; j < n; ++j) {
      int num;
      if (j == i) {
        num = (s[j]-'0')*10 + (s[j+1]-'0');
        j++;
      } else {
        num = s[j]-'0';
      }
      if (num == 0) {
        cout << 0 << endl;
        return;
      } else if (num > 1) {
        ans += num;
      }
    }
    if (ans == 0) ans = 1;
    result = min(result, ans);
  }

  cout << result << endl;
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