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
    int n, k;
    cin >> n >> k;

    int tmp;
    map<int, int> mp;
    vector<int> a;

    for (int i = 0; i < n; ++i) cin >> tmp, mp[tmp]++;
    for (auto& [n, f]: mp) a.push_back(n);

    int l = 0, r = 0, sum = 0, ans = 0;

    while (r < a.size())
    {
        if (a[r] != a[r - 1] + 1)
        {
            l = r;
            sum = 0;
        } else if (r - l + 1 > k)
        {
            sum -= mp[a[l]];
            l++;
        }

        sum += mp[a[r]];
        ans = max(ans, sum);
        r++;
    }

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