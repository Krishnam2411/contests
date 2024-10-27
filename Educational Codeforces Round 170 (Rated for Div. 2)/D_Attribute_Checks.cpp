// Krishnam Maheshwari
// 2212147

#include <iostream>
#include <bits/stdc++.h>

#define MOD 1000000007
using namespace std;

typedef long long int ll;
typedef unsigned long long ull;


// int check(vector<int>& a, int i, int strength, int intelligence)
// {
//     if (i == a.size()) return 0;

//     int passes = 0;

//     if (a[i] > 0)
//     {
//         passes = check(a, i + 1, strength, intelligence) + int(intelligence >= a[i]);
//     }
//     else if (a[i] < 0)
//     {
//         passes = check(a, i + 1, strength, intelligence) + int(strength >= abs(a[i]));
//     }
//     else
//     {
//         passes = check(a, i + 1, strength + 1, intelligence);
//         passes = max(passes, check(a, i + 1, strength, intelligence + 1));
//     }

//     return passes;
// }
int check(vector<int>& a, int i, vector<vector<int>>& attr, vector<int>& memo, vector<int>& idx)
{
    if (i == a.size()) return 0;

    if (memo[idx[i]] != -1) return memo[idx[i]];

    int passes = 0, x = 0, y = 0;

    if (a[i] > 0)
    {
        passes = check(a, i + 1, attr, memo, idx) + int(attr[idx[i]][0] >= a[i]);
    }
    else if (a[i] < 0)
    {
        passes = check(a, i + 1, attr, memo, idx) + int(attr[idx[i]][1] >= abs(a[i]));
    }
    else
    {
        attr[idx[i]][0]++;
        x = check(a, i + 1, attr, memo, idx);
        attr[idx[i]][0]--;
        attr[idx[i]][1]++;
        y = check(a, i + 1, attr, memo, idx);
        attr[idx[i]][1]--;
    }

    return memo[idx[i]] = max({ x, y, passes });
}


void solve() 
{
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    for (auto& x: a) cin >> x;

    vector<int> idx(n);
    vector<int> memo(m + 1, -1);
    vector<vector<int>> attr(m + 1, {0, 0});

    for (int i = 0; i < n; ++i)
    {
        if (i > 0) idx[i] = idx[i - 1];
        if (a[i] == 0) idx[i]++;
    }

    cout << check(a, 0, attr, memo, idx) << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    // cin>>tc;
    while(tc--){
      solve();
    }
    return 0;
}