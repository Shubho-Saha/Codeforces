#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n, m;
    cin>>n>>m;
    vector<vector<ll>> v(n, vector<ll>(m));
    vector<pair<ll, ll>> p;
    for(int i=0; i<n; i++)
    {
        ll sum = 0;
        for(int j=0; j<m; j++) {
            cin>>v[i][j];
            sum += v[i][j];
        }
        p.push_back({sum, i});
    }

    sort(all(p), greater<>());

    vector<ll> res;
    ll prev = 0;
    for(int i=0; i<n; i++) {
        ll arridx = p[i].second;
        vector<ll> copy = v[arridx];
        for(int k=0; k<m; k++) {
            ll crnt = copy[k] + prev;
            res.push_back(crnt);
            prev = crnt;
        }
    }

    ll ans = 0;
    for(auto x : res) {
        ans += x;
    }

    cout<<ans<<nl;
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