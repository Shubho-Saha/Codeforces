#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    ll n, x;
    cin>>n>>x;

    vector<ll> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    sort(all(v));
    ll sz = 0, ans = 0;

    for(int i=n-1; i>=0; i--) {
        int val = v[i];
        sz++;
        if ((sz*val*1ll) >= x) {
            ans++;
            sz = 0;
        }
    }

    cout<<ans<<nl;

}
int main()
{
    fastIO();
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}