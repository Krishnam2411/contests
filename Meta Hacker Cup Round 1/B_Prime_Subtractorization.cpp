// Krishnam Maheshwari
// 2212147

#include <iostream>
#include <bits/stdc++.h>

#define MOD 1000000007
using namespace std;

typedef long long int ll;
typedef unsigned long long ull;

unordered_map<ll, bool> isPrime;

void sieveOfEratosthenes(ll N) {
    for (ll i = 2; i <= N; i++) {
        isPrime[i] = true;
    }

    for (ll i = 2; i <= std::sqrt(N); i++) {
        if (isPrime[i]) {
            for (ll j = i * i; j <= N; j += i) {
                isPrime[j] = false;
            }
        }
    }
}

ll solve(vector<ll> primes) 
{
    int N; cin >> N;

    ll count = 0;

    if (N == 1) return 0;

    for (auto prime: primes)
    {
        if (prime + 2 > N) break;
        if (isPrime[prime + 2])
        {
            count++;
            break;
        }
    }

    for (int i = 1; primes[i] + 2 <= N; ++i)
    {
        if (isPrime[primes[i] + 2]) count++;
    }

    return count;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);

    sieveOfEratosthenes(20000001);

    vector<ll> primes;
    for (ll i = 2; i <= 20000001; ++i) {
        if (isPrime[i]) primes.push_back(i);
    }

    int tc = 1;
    cin>>tc;
    for(int c = 1; c <= tc; ++c){
      cout << "Case #" << c << ": " << solve(primes) << endl;
    }
    return 0;
}