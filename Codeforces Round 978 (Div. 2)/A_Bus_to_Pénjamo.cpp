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
    int n, r; cin >> n >> r;
    vector<int> a(n);
    for (auto& x: a) cin >> x;

    ll happy = 0, rest = 0;
    for (auto x: a) {
        happy += 2 * (x / 2);
        rest += x % 2;
    }
    
    if ((r - happy / 2) > rest) happy += rest;
    else happy += 2 * (r - happy / 2) - rest;
    
    cout << happy << endl;
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