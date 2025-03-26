#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;

    ll rowtebosbe = ceil((1.0*k)/n);
    ll gap = m - rowtebosbe;

    if (gap <= 0) {
        cout<<rowtebosbe<<nl;
    } else {
        ll ans = ceil((1.0*rowtebosbe)/(gap+1));
        cout<<ans<<nl;
    }
}
int main()
{
    fastIO();
    int t;
    cin>>t;
    while(t--) {
        solve();
    }

    return 0;
}