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
    int n, l, r;
    cin >> n >> l >> r;
    
    vector<int> first, last;
    for(int i=1; i<=n; i++) {
        int x;
        cin>>x;

        if (i <= r) {
            first.push_back(x);
        }
        if (i >=l) {
            last.push_back(x);
        }
    }

    sort(all(first));
    sort(all(last));
    debug(first) debug(last) 

    int sz = r - l + 1;
    debug(sz);
    ll sum1 = accumulate(first.begin(), first.begin()+sz, 0ll);
    ll sum2 = accumulate(last.begin(), last.begin()+sz, 0ll);

    debug(sum1,sum2)
    cout<<min(sum1, sum2)<<nl;
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