// Krishnam Maheshwari
// 2212147
#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;

typedef long long int ll;
typedef unsigned long long ull;

void solve()
{
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  for (auto &x : a) cin >> x;

  sort(a.begin(), a.end());
  map<int, vector<int>> mp;
  for (auto it : a) {
    mp[it % k].push_back(it);
  }
  bool flag = false;
  ll ans = 0;
  if (n % 2) flag = true; // odd

  for (auto it : mp) {
    vector<int> v = it.second;
    if (v.size() % 2) {
      if (flag) {
        flag = false;
        ll sum = 0;
        for (int i = 1; i < v.size(); i += 2) {
          sum += (v[i+1]-v[i])/k;
        }
        ll fin = sum;
        for (int i = 0; i < v.size()-1; i += 2) {
          sum += (v[i+1]-v[i])/k;
          sum -= (v[i+2]-v[i+1])/k;
          fin = min(fin, sum);
        }
        ans += fin;
      }
      else {
        cout << -1 << endl;
        return;
      }
    } else {
      for (int i = 0; i < v.size(); i += 2) {
        ans += (v[i+1]-v[i])/k;
      }
    }
  }

  cout << ans << endl;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int tc = 1;
  cin >> tc;
  while (tc--)
  {
    solve();
  }
  return 0;
}