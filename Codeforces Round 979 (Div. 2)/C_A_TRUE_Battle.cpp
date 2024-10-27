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


void solve() 
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    if (s[0] == '1' || s[n-1] == '1') {
        cout << "YES" << endl;
    } else if (n == 2 && (s[0] != '0' || s[1] != '0')) {
        cout << "YES" << endl;
    } else if (n > 2) {

        for (int i = 0; i <= n - 2; i++)
        {
            if (s[i] == '1' && s[i+1] == '1')
            {
                cout << "YES" << endl;
                return;
            }
        }

        cout << "NO" << endl;
    } else {
        cout << "NO" << endl;
    }
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