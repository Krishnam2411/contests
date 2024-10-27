// Krishnam Maheshwari
// 2212147

#include <iostream>
#include <bits/stdc++.h>

#define MOD 1000000007
using namespace std;

typedef long long int ll;
typedef unsigned long long ull;


double solve() 
{
    int N; cin >> N;

    vector<int> A(N), B(N);

    for (int i = 0; i < N; ++i)
        cin >> A[i] >> B[i];

    double l = A[0], r = B[0];

    for (int x = 2; x <= N; ++x)
    {
        double a = ((double)(x) * l) / (x - 1);
        double b = ((double)(x) * r) / (x - 1);

        l = max((double)A[x - 1], a);
        r = min((double)B[x - 1], b);

        if (l > r)
        {
            return -1;
        }
    }

    double result = N / r;

    return result;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);
    int tc = 1;
    cin>>tc;
    for(int c = 1; c <= tc; ++c){
      cout << "Case #" << c << ": " << setprecision(6) << solve() << endl;
    }
    return 0;
}