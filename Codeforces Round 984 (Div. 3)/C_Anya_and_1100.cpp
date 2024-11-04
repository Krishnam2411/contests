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

bool chk(int i, string& s)
{
    return s.substr(i, 4) == "1100";
}

void solve() 
{
    string s;
    cin >> s;
    int n = s.length();
    int q;
    cin >> q;

    set<int> st;
    for (int i = 0; i <= n - 4; ++i)
    {
        if (chk(i, s)) st.insert(i);
    }

    for (int j = 0; j < q; ++j)
    {
        int i;
        char v;
        cin >> i >> v;
        i--;
        if (n < 4) cout << "NO\n";
        else
        {
            if (s[i] != v)
            {
                s[i] = v;
                st.erase(i - 3);
                st.erase(i - 2);
                st.erase(i - 1);
                st.erase(i);

                if (i - 3 >= 0 && i < n && chk(i - 3, s)) st.insert(i - 3);
                if (i - 2 >= 0 && i + 1 < n && chk(i - 2, s)) st.insert(i - 2);
                if (i - 1 >= 0 && i + 2 < n && chk(i - 1, s)) st.insert(i - 1);
                if (i >= 0 && i + 3 < n && chk(i, s)) st.insert(i);
            } 

            if (!st.empty()) cout << "YES\n";
            else cout << "NO\n";
        }
    }
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