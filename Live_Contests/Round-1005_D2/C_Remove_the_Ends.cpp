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
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    vector<ll> pre(n), suf(n);
    ll prev = 0;
    for(int i=0; i<n; i++) {
        if (v[i] > 0) {
            ll crnt = abs(v[i]) + prev;
            pre[i] = crnt;
            prev = crnt;
        } else {
            ll crnt = prev;
            pre[i] = crnt;
            prev = crnt;
        }
    }

    prev = 0;
    for(int i=n-1; i>=0; i--) {
        if (v[i] < 0) {
            ll crnt = prev + abs(v[i]);
            suf[i] = crnt;
            prev = crnt;
        } else {
            ll crnt = prev;
            suf[i] = crnt;
            prev = crnt;
        }
    }

    ll mxans = pre[0] + suf[0];
    for(int i=0; i<n; i++) {
        mxans = max(mxans, pre[i]+suf[i]);
    }

    cout<<mxans<<nl;
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