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
    string s, to;
    cin >> s;

    int q;
    cin >> q;

    int n = s.length();

    for (char& c : s) {
        if (isupper(c))
            to += tolower(c);
        else if (islower(c))
            to += toupper(c);
    }

    while(q--)
    {
        ll x;
        cin >> x;

        ll k = (x + n - 1) / n;
        ll idx = x - n * (k - 1);
        ll i = 1LL << ((64) - __builtin_clzll(k));
        bool t = false;
        while (i > 1)
        {
            i >>= 1;
            if (k > i)
            {
                k -= i;
                t ^= true;
            }
        }


        if (t)
            cout << to[idx - 1] << " ";
        else 
            cout << s[idx - 1] << " ";
    }
    cout << endl;
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