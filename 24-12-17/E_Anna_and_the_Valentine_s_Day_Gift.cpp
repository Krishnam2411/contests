// Krishnam Maheshwari
// 2212147

#include <bits/stdc++.h>

using namespace std;

#ifndef ONLINE_JUDGE
#include "debug.cpp"
#else
#define debug(...)
#define debugArr(...)
#endif

typedef long long int ll;
typedef unsigned long long ull;
typedef long double ld;

#define MOD 1000000007
#define _MOD 998244353
#define INF 1000000000000000000
#define EPS 0.000000001
#define PI 3.141592653589793238462
#define newline "\n"
#define set_bits __builtin_popcountll


void solve(int tc) 
{
    int n, m;
    cin >> n >> m;

    priority_queue<pair<int, int>> pq;
    for (int i = 0; i < n; ++i)
    {
        string s; cin >> s;
        int t = 0;
        while (s[s.length() - 1 - t] == '0') t++;
        pq.push({t, s.length()});
    }
    
    for (int i = 0; i < n - 1; ++i)
    {
        auto [t, s] = pq.top();
        pq.pop();
        pq.push({0, s - t});
        auto [t1, s1] = pq.top();
        pq.pop();
        auto [t2, s2] = pq.top();
        pq.pop();
        pq.push({t2, s1 + s2});
    }
    
    if (pq.top().second - pq.top().first > m)
    {
        cout << "Sasha\n";
    }
    else
    {
        cout << "Anna\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int i = 1; i <= tc; ++i)
    {
        solve(tc);
    }
    return 0;
}