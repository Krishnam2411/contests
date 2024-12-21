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
    vector<string> grid(3);
    for (int i = 0; i < 3; ++i)
        cin >> grid[i];

    vector<int> dx = {1, 1, 1, 0, -1, -1, -1, 0};
    vector<int> dy = {1, 0, -1, -1, -1, 0, 1, 1};

    queue<pair<vector<pair<int, int>>, string>> q;
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            string tmp = string(1, grid[i][j]);
            q.push({{{i, j}}, tmp});
        }
    }

    set<string> res;
    while (!q.empty())
    {
        auto [d, tmp] = q.front();
        q.pop();

        for (int i = 0; i < 8; ++i)
        {
            int x = dx[i] + d.back().first, y = dy[i] + d.back().second;
            if (x >= 0 && x < 3 && y >= 0 && y < 3)
            {
                bool ok = true;
                for (auto [a, b]: d)
                {
                    if (x == a && y == b)
                    {
                        ok = false;
                        break;
                    }
                }
                if (ok)
                {
                    tmp += grid[x][y];
                    if (tmp.length() == 3)
                    {
                        res.insert(tmp);
                    }
                    else
                    {   
                        d.push_back({x, y});
                        q.push({d, tmp});
                        d.pop_back();
                    }
                    tmp.pop_back();
                }
            }
        }
    }

    cout << *res.begin() << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    // cin >> tc;
    for (int i = 1; i <= tc; ++i)
    {
        solve(tc);
    }
    return 0;
}