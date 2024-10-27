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

    vector<array<int, 2>> arr(n);
    for (auto& x: arr) cin >> x[0] >> x[1];

    sort(arr.begin(), arr.end(), [](array<int, 2>& a, array<int, 2>& b) {
        if (min(a[0], a[1]) != min(b[0], b[1])) return min(a[0], a[1]) < min(b[0], b[1]);
        return max(a[0], a[1]) < max(b[0], b[1]);
    });

    for (int i = 0; i < n; i++) {
        cout << arr[i][0] << " " << arr[i][1] << " \n"[i == n-1];
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