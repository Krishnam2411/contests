// NILESH BAHETI
// 2212093
#include<bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.cpp"
#else
#define debug(...)
#define debugArr(...)
#endif

#define Mod 1000000007
#define int long long
#define pb push_back
#define vi vector<int>
#define maxpq priority_queue<int>
#define minpq priority_queue<int, vector<int>, greater<int>>
#define maxe(v) (*max_element(v.begin(), v.end()))
#define mine(v) (*min_element(v.begin(), v.end()))
#define sp(x) fixed << setprecision(x)
#define PI 3.141592653589793238
#define inpv(v) for(auto &x: v) cin >> x
#define bpl(n) __builtin_popcountll(n)
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//------------------------------------IMPORTANT FUNCTIONS-----------------------------------------------------------------------------------------------------------------------------------
int sum(int n) { return (n * (n + 1)) / 2; }
int ceil(int a, int b) { return (a + b - 1) / b; }
bool isprime(int n) { if (n == 1) return 0; for (int i = 2; i <= sqrt(n); i++) { if (n % i == 0) return false; } return true; }
int bin_expo(int a, int b, int mod) { int res = 1; for (a %= mod; b; b >>= 1, a = a * a % mod) if (b & 1) res = res * a % mod; return res; }
int binpow(int a, int b) { int res = 1; while (b > 0) { if (b & 1) res = res * a; a = a * a; b >>= 1; } return res; }
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// KMP
vector<int>kmp(string s)
{
    vector<int>lps(s.size(),0);
    for(int i=1;i<lps.size();i++)
    {
        int prev_idx=lps[i-1];
        while(prev_idx>0 && s[i]!=s[prev_idx])
        {
            prev_idx=lps[prev_idx-1];
        }
        lps[i]=prev_idx+(s[i]==s[prev_idx] ? 1:0);
    }
    return lps;
}

//DSU
class DisjointSet {
    vector<int> parent, size;
public:
    DisjointSet(int n) {
        parent.resize(n + 1);
        size.resize(n + 1);
        for (int i = 0; i <= n; i++) {
            parent[i] = i;
            size[i] = 1;
        }
    }
    int findUPar(int node) {
        if (node == parent[node])
            return node;
        return parent[node] = findUPar(parent[node]);
    }
    void unionBySize(int u, int v) {
        int ulp_u = findUPar(u);
        int ulp_v = findUPar(v);
        if (ulp_u == ulp_v) return;
        if (size[ulp_u] < size[ulp_v]) {
            parent[ulp_u] = ulp_v;
            size[ulp_v] += size[ulp_u];
        } else {
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v];
        }
    }
};


int32_t main() {
    FAST
    
    return 0;
}