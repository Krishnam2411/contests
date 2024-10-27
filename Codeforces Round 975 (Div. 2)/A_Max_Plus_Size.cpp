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
    int n; cin >> n;
    vector<int> arr(n);

    for (auto& x: arr) cin >> x;

    int a = 0, b = 0, an = 0, bn = 0;
    for (int i = 0; i < arr.size(); ++i)
    {
        if (i % 2) {
            a = max(a, arr[i]);
            an++;
        } else {
            b = max(b, arr[i]);
            bn++;
        }
    } 

    cout << max(a + an, b + bn) << endl;
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