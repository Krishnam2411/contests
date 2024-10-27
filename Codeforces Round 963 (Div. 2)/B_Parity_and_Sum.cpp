// Krishnam Maheshwari
// 2212147
#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;

typedef long long int ll;
typedef unsigned long long ull;

//----------------------------------------------------------------------------------------------------------------------------
string to_string(char x) {return (string) "\'" + x + "\'";}
string to_string(const string &x) {return '\"' + x + '\"';}
string to_string(const char *x) {return to_string((string) x);}
string to_string(bool x) {return x ? "true" : "false";}
template<typename T, typename V> string to_string(const pair<T, V> &x) {return '(' + to_string(x.first) + ',' + to_string(x.second) + ')';}
template<typename T> string to_string(const T &x) {int f = 0; string r; for (auto &i: x) r += (f++ ? "," : "") + to_string(i); return '{' + r + '}';}
void _print() {cerr << "]\n";}
template <typename T, typename... V> void _print(T t, V... v) {cerr << to_string(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)

ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
ll power(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
ll fact(ll n, ll mod) {if (n == 0) return 1; ll ans = 1; for (ll i = 1; i <= n; i++){ans = (ans % mod * i % mod) % mod;} return ans;}
vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
//----------------------------------------------------------------------------------------------------------------------------

void solve()
{
  int n;
  cin >> n;

  ll mx = 0;
  vector<ll> arr;
  for (int i = 0; i < n; ++i)
  {
    ll tmp;
    cin >> tmp;
    if (tmp % 2 == 0) arr.push_back(tmp);
    else mx = max(mx, tmp);
  }

  if (arr.size() == 0 || arr.size() == n)
  {
    cout << 0 << endl;
    return;
  }

  sort(arr.begin(), arr.end());
  for (int i = 0; i < arr.size(); ++i)
  {
    if (arr[i] > mx)
    {
      cout << arr.size() + 1 << endl;
      return;
    }
    mx = mx + arr[i];
  }

  cout << arr.size() << endl;
}

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin>>tc;
    while(tc--)
    {
      solve();
    }
    return 0;
}