#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<ll> v(n);
    for(auto &it : v) cin>>it;
    sort(all(v));

    ll first = v.front();

    ll gcd = 0;
    for(int i=1; i<n; i++) {
        if (v[i] % first == 0) {
            gcd = __gcd(gcd, v[i]);
        }
    }

    if (first == gcd) {
        cout<<"Yes"<<nl;
    } else {
        cout<<"No"<<nl;
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