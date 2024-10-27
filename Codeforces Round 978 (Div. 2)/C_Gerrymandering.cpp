// Krishnam Maheshwari
// 2212147

#include <iostream>
#include <bits/stdc++.h>

#define MOD 1000000007
using namespace std;

typedef long long int ll;
typedef unsigned long long ull;

int calc(char a, char b, char c)
{
    return (a == 'A') + (b == 'A') + (c == 'A') > 1;
}

void solve() 
{
    int N; cin >> N;
    vector<string> arr(2);
    cin >> arr[0] >> arr[1];

    vector<int> t1(N + 1), t2(N + 1), t3(N + 1);

    for (int i = 0; i < N; ++i)
    {
        if (i % 3 == 0)
        {
            t1[i + 3] = max(t1[i + 3], t1[i] + calc(arr[0][i], arr[0][i + 1], arr[0][i + 2]) + calc(arr[1][i], arr[1][i + 1], arr[1][i + 2]));
            t2[i + 1] = max(t2[i + 1], t1[i] + calc(arr[0][i], arr[1][i], arr[0][i + 1]));
            t3[i + 1] = max(t3[i + 1], t1[i] + calc(arr[0][i], arr[1][i], arr[1][i + 1]));
        }
        if (i % 3 == 1)
        {
            if (i + 3 < N)
            {
                t2[i + 3] = max(t2[i + 3], t2[i] + calc(arr[0][i + 3], arr[0][i + 1], arr[0][i + 2]) + calc(arr[1][i], arr[1][i + 1], arr[1][i + 2]));
                t3[i + 3] = max(t3[i + 3], t3[i] + calc(arr[0][i], arr[0][i + 1], arr[0][i + 2]) + calc(arr[1][i + 3], arr[1][i + 1], arr[1][i + 2]));
            }
            t1[i + 2] = max(t1[i + 2], t2[i] + calc(arr[1][i], arr[1][i + 1], arr[0][i + 1]));
            t1[i + 2] = max(t1[i + 2], t3[i] + calc(arr[0][i], arr[1][i + 1], arr[0][i + 1]));
        }
    }

    cout << t1[N] << endl;
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