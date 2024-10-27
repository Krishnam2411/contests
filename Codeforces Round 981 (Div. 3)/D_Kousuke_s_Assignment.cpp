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

int solve2(vector<int>& arr)
{
    int ans = 0, n = arr.size();
    vector<ll> a(n + 1);
    for (int i = 1; i <= n; ++i)
    {
        a[i] = arr[i - 1] + a[i - 1];
    }
    set<ll> s;

    for (int i = 0; i <= n; ++i)
    {
        if (s.find(a[i]) != s.end())
        {
            ans++;
            s.clear();
            s.insert(a[i]);
        }
        else 
        {
            s.insert(a[i]);
        }
    }

    return ans;
}

void solve() 
{
    int n; cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    
    int ans = solve2(a);
    reverse(a.begin(), a.end());
    ans = max(ans, solve2(a));

    cout << ans << endl;
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