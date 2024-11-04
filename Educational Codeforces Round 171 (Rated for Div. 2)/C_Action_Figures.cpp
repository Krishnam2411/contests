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

    vector<int> v;

    ll cost = (1LL * n * (n + 1)) / 2;

    int cnt = 0;
    deque<int> q;
    for (int i = n - 1; i >= 0; --i)
    {
        if (s[i] == '1')
        {
            q.push_front(i + 1);
        }
        else if (!q.empty())
        {
            cost -= q.back();
            q.pop_back();
            cnt++;
        }
    }

    while (!q.empty() && cnt < (n / 2))
    {
        if (q.size() >= 2) {
            cost -= q.back();
            cnt++;
            q.pop_back();
            q.pop_front();
        } else break;
    }

    cout << cost << endl;
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