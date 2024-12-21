#include "bits/stdc++.h"
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;using namespace std::chrono;
using namespace __gnu_pbds;
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
#define int ll

//======IO============================================================
template <typename T>
istream &operator>>(istream &istream, vector<T> &v){for (auto &it : v) cin >> it; return istream;}
template<typename typC,typename typD> istream &operator>>(istream &cin,pair<typC,typD> &a) { return cin>>a.first>>a.second; }
template <typename T>
ostream &operator<<(ostream &ostream, vector<T> &v){for (auto &it : v) cout << it << ' '; return ostream;}
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const pair<typC,typD> &a) { return cout<<a.first<<' '<<a.second; }
//=======ordered set===============================================
typedef tree<int, null_type, less<int>, rb_tree_tag, 
tree_order_statistics_node_update> pbds; // find_by_order, order_of_key,
//============basic macros========================================
const int mod1=1e9+7;
#define INF 1e18
#define root2 1.4142135
#define PI atan(1)*4
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
#define e "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define sz(a) a.size()
#define mpll map<ll,ll>
#define pll pair<ll,ll>
#define pi pair<int, int>
#define vi vector<int>
#define vll vector<ll>
#define vc vector<char>
#define vs vector<string>
#define vpi vector<pair<int,int>>

#define count_set_bits(x) __builtin_popcount(x)
#define all(x) (x).begin(), (x).end()
#define reverseall(v) reverse(all(v));
#define sortall(x) sort(all(x))
#define rvsort(a) sort(all(a),greater<int>())
#define sp(n)  cout<<setprecision(n)<<fixed

ll ceil(ll a,ll b){return (a+b-1)/b;}
void divisor(vector<ll> &div,int n);
void primefactor(vector<pair<ll,ll>> &v,ll n);
bool prime(int n);
void sieve(vector<int> &v);
//===============random number===========================================
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
ll uid(ll l, ll r) {return uniform_int_distribution<ll>(l, r)(rng);}
//ll x=uid(1,1e9) for random number between 1 and 1e9
//=============discrete str. and binexpo========================================
ll bin_expo(ll a, ll b, ll mod) {ll res = 1;a%=mod;if(a==0)return 0;while (b > 0) {if (b & 1)res = (res * 
a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
ll ncr(ll n, ll r, ll m, ll *fact, ll *ifact) {if(n<r)return 0;ll val1 = fact[n]; ll val2 = ifact[n - r]; 
ll val3 = ifact[r];if(n < r) return 0;if(n == r || r == 0) return 1;if(r<0) return 0; return (((val1 * 
val2) % m) * val3) % m;}
ll mminvprime(ll a, ll b) {return bin_expo(a, b - 2, b);}
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll mod_div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}  
//only for prime m
const int N=1e6;
ll fact[N],ifact[N];
void PreComp(){
    fact[0]=1;for(int i=1;i<N;i++){fact[i]=(fact[i-1]*i)%mod1;}
    ifact[N-1]=mminvprime(fact[N-1],mod1);for(int i=N-1;i>=0;i--){ifact[i-1]=(ifact[i]*i)%mod1;}
}
ll C(ll n,ll r){return ncr(n,r,mod1,fact,ifact);} //uncomment Precomp() func before using nCr function in main function
ll add(ll a,ll b){return mod_add(a,b,mod1);}//(a+b)%mod1
ll sub(ll a,ll b){return mod_sub(a,b,mod1);}//(a-b)%mod1
ll mul(ll a,ll b){return mod_mul(a,b,mod1);}//(a*b)%mod1
ll divi(ll a,ll b){return mod_div(a,b,mod1);}//(a/b)%mod1

//gcd(a,b)*lcm(a,b)=a*b
class dsu{
    public:
        vi size,parent;
        dsu(int n){
            size.resize(n+1);
            parent.resize(n+1);
            FOR(i,n+1){
                size[i]=1;
                parent[i]=i;
            }
        }
        int fup(int a){
            if(a==parent[a]) return a;
            return parent[a]=fup(parent[a]);
        }
        void unite(int a,int b){
            int u=fup(a),v=fup(b);
            if(u==v) return ;
            if(size[u]>size[v]){
                parent[v]=u;
                size[u]+=size[v];
            }
            else{
                parent[u]=v;
                size[v]+=size[u];
            }
        }
};
//==========solve it========================
void supernatural(){
    
}
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    auto beg = high_resolution_clock::now();
    //uncomment below line before using nCr function
    //PreComp();
    int T;
    cin >> T;
    while (T--) {
       supernatural();
    }
    
    auto end = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(end - beg);
    // cerr << "Elapsed Time: " << duration.count() / 1000000.0;
    return 0;
}
//===============some functions======================================
//sieve prime
void sieve(vector<int> &v){
    //size of v is n+1 vimp
    //in main declare it with n+1 size and all elements should be
    //declared as 1
    int n=v.size();
    v[0]=0,v[1]=0;
    for(int i=2;i*i<=n;i++){
        if(v[i]){
            for(int j=i*i;j<=n;j+=i){
                v[j]=0;
            }
        }
    }
    //all prime index will be 1 rest 0
}

bool prime(int n) {
    if(n<2) return false;
    if(n==2) return true;
    for(int i=2;i*i<=n;i++) {
        if(n%i==0)
            return false;
    }
    return true;
}

void divisor(vector<ll> &div,int n){
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            div.pb(i);
            if (i * i != n and n / i != n) //if you want n to be present in div array then remove n/i!=n
                div.pb(n / i);
        }
    }
       sortall(div);
}
void primefactor(vector<pair<ll,ll>> &v,ll n){
    for(ll i=2;i*i<=n;i++){
        if(n%i==0){
            int c=0;
            while(n%i==0){
                c++;
                n/=i;
            }
            v.push_back({i,c});
        }
    }
    if(n>1) v.push_back({n,1});
}