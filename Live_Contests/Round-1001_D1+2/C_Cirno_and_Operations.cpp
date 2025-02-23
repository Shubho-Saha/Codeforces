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
    deque<ll> v(n);

    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    ll mxAns = LLONG_MIN;
    while(v.size() > 1)
    {
        ll crntTotal = 0;
        for(auto z : v) {
            crntTotal += z;
        }
        mxAns = max(mxAns, crntTotal);
        ll first = v.front();
        ll last = v.back();
        if (last < first) {
            reverse(all(v));
        }
        for(int i=v.size()-1; i>0; i--) {
            ll newval = v[i] - v[i-1];
            v[i] = newval;
        }
        v.pop_front();
    }

    cout<<max(mxAns, v[0])<<nl;

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

// https://codeforces.com/contest/2062/problem/C