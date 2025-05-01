#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
#ifndef ONLINE_JUDGE
#include "../DebugTemplate/debug.h"
#else
#define debug(x...)
#define dbgsize(x)
#endif

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
    int n; 
    cin>>n;
    vector<int> v(n);
    for(auto &it : v) cin>>it;
    sort(all(v), greater<>());
    
    int rem = n;
    ll psum = 0, elsum = 0;

    for(int i=0; i<n; i++) {
        psum += primes[i];
        elsum += v[i];
        if (elsum < psum) {
            rem = i;
            break;
        }
    }
    
    cout<<n-rem<<nl;

}

int main()
{
    fastIO();
    sieve(mxN);
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
    
    return 0;
}