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
    ll n, x; cin >> n >> x;

    vector<ll> a(n);
    for (auto& i: a) cin >> i;

    ll mx = *max_element(a.begin(), a.end());
    ll sum = accumulate(a.begin(), a.end(), 0ll);

    cout << max(mx, (sum + x - 1)/ x) << endl;
    // sort(a.rbegin(), a.rend());

    // vector<ll> q(x, 0ll);

    // priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
    // for (ll i = 0; i < x; i++)
    // {
    //     pq.push({ 0, i });
    // }

    // for (auto& e: a)
    // {
    //     auto [c, j] = pq.top();
    //     pq.pop();

    //     q[j] += e;
    //     pq.push({ q[j], j });
    // }

    // cout << *max_element(q.begin(), q.end()) << endl;
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