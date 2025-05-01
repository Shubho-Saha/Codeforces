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

void solve()
{
    int n;
    cin>>n;
    vector<ll> v(n);
    priority_queue<pair<ll,ll>, vector<pair<ll,ll>>> pq;
    for(int i=0; i<n; i++) {
        cin>>v[i];
        pq.push({v[i], i});
    }

    ll res = 0;
    for(int i=n-1; i>=0; i--)
    {
        while (!pq.empty() && pq.top().second > i) {
            pq.pop();
        }
        auto [val, idx] = pq.top();
        res += val;
        cout<<res<<" ";
        res -= val;
        res += v[i];
    }
    cout<<nl;
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