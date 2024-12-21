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
    int n; cin >> n;
    string s; cin >> s;

    vector<int> p, a;
    for (int i = 0; i < n; ++i)
    {
        if (s[i] == 'P') p.push_back(i);
        else if (s[i] == '*') a.push_back(i);
    }

    auto chk = [&](ll t) -> bool
    {
        int i = 0, j = 0;
        while (i < p.size() && j < a.size())
        {
            int l = min(a[j], p[i]), r = max(a[j], p[i]);
            while (j < a.size() && (r - l + min(r - p[i], p[i] - l)) <= t)
            {
                j++;
                l = min(l, a[j]);
                r = max(r, a[j]);
            }
            i++;
        }

        return (j == a.size());
    };

    ll low = 1, high = 2 * n, mid;
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (chk(mid)) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    cout << high + 1 << endl;
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