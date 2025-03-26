#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

const int mxN = 1e7+9;
vector<bool> sieve(mxN, true);
vector<int> primes;

void sievefun(int n) {
    for(int i=2; i*i <= n; i++)
    {
        if (sieve[i] == false) continue;
        for(int k=i+i; k <= n; k += i)
        {
            sieve[k] = false;
        }
    }
}

void loadPrimes(int n)
{
    for(int i=2; i<=n; i++) {
        if (sieve[i]) {
            primes.push_back(i);
        }
    }
}
void solve()
{
    int n;
    cin>>n;

    auto it = upper_bound(all(primes), n);
    ll total = it - primes.begin();

    ll ans = total;
    for(ll i=2; i<=n; i++) {
        ll val = i;
        ll a = n/val;
        auto it2 = upper_bound(all(primes), a);
        ll cnt = it2 - primes.begin();
        ans += cnt;
        if (cnt == 0) break;
    }

    cout<<ans<<nl;
    
}

int main()
{
    fastIO();
    int t;
    cin>>t;

    sievefun(mxN);
    loadPrimes(mxN);

    while(t--) {
        solve();
    }

    return 0;
}