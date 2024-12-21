// Krishnam Maheshwari
// 2212147

#include <iostream>
#include <bits/stdc++.h>

#ifndef ONLINE_JUDGE
#include "debug.cpp"
#else
#define debug(...)
#define debugArr(...)
#endif

#define MOD 1000000007
#define INF 1000000000
using namespace std;

typedef long long int ll;
typedef unsigned long long ull;

bool canWin(string s, string r) {
    int n = s.length();

    int x1 = count(s.begin(), s.end(), '1');
    int x2 = count(r.begin(), r.end(), '1');
    int y1 = n - x1, y2 = n - 1 - x2;


    if (abs(x1 + x2 - y1 - y2) > 1)
    {
        return false;
    }
    if (abs(x1 - y2) == 1 && (r.back() == '1')) return true;
    if (abs(x2 - y1) == 1 && (r.back() == '0')) return true;
    return false;
}

void solve() 
{
    int n;
    cin >> n;
    string s, r;
    cin >> s >> r;
    
    if (canWin(s,r)) cout << "YES" << endl;
    else cout << "NO" << endl;
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