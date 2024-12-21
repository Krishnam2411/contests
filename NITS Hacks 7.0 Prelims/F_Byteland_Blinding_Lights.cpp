#include <iostream>
#include <bits/stdc++.h>

#define MOD 1000000007
#define INF 1000000000
using namespace std;

typedef long long int ll;
typedef unsigned long long ull;

double chk(int a, int b, int v1, int v2, int x, int y)
{
    double A = double(v1) * v2;
    double B = double(v1) * y - double(v2) * x + a * v2 - b * v1;
    double C = double(a) * y + b * x - a * b;
    double D = B * B - 4 * A * C;

    const double epsilon = 1e-9;
    if (D < -epsilon) return -1;
    if (D < epsilon) D = 0;

    double sqrtD = sqrt(D);
    double t1 = (-B + sqrtD) / (2 * A);
    double t2 = (-B - sqrtD) / (2 * A);

    if (t1 >= 0 && t2 >= 0) return min(t1, t2);
    else if (t1 >= 0) return t1;
    else if (t2 >= 0) return t2;

    return -1;
}

void solve() 
{
    int a, b, v1, v2;
    cin >> a >> b >> v1 >> v2;

    int n; 
    cin >> n;

    vector<pair<double, pair<int, int>>> v;

    for (int i = 0; i < n; ++i)
    {
        int x, y;
        cin >> x >> y;

        double t = chk(a, b, v1, v2, x, y);
        if (t != -1)
        {
            v.emplace_back(t, make_pair(x, i + 1));
        }
    }

    if (v.empty()) 
        cout << -1 << endl;
    else 
    {
        sort(v.begin(), v.end());
        cout << v[0].second.second << endl; 
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
