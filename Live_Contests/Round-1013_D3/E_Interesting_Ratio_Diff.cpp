#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

const int mxN = 1e7+9;
vector<bool> isPrime(mxN, true);
vector<int> primes;

void sieve(int n) 
{
    isPrime[0] = isPrime[1] = false;
    for(int i=2; i*i <= n; i++) {
        if(isPrime[i]) {
            for(int k=i*i; k<=n; k+=i) {
                isPrime[k] = false;
            }
        }
    }

    for(int i=0; i<=n; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
        }
    }
}

void solve()
{
    int n; cin>>n;
    ll res = 0;
    for (auto x : primes) {
        if (x > n) break;
        res += (n/x);
    }
    cout<<res<<nl;
}

int main()
{
    fastIO();
    sieve(mxN);

    int t; cin>>t;
    while(t--) {
        solve();
    }

    return 0;
}