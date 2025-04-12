#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    ll n, k;
    cin>>n>>k;
    vector<ll> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    if (k == 1) {
        ll mx = 0;
        for(int i=0; i<n; i++) {
            if (i == 0 || i == n-1) {
                ll crnt = v[0] + v[n-1];
                mx = max(mx, crnt);
            } else {
                ll crnt = v[i] + max(v[0], v[n-1]);
                mx = max(mx, crnt);
            }
        }
        cout<<mx<<nl;
        return;
    }

    sort(all(v), greater<>());
    ll sum = 0;
    for(int i=0; i<=k; i++) {
        sum += v[i];
    }
    cout<<sum<<nl;
    

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