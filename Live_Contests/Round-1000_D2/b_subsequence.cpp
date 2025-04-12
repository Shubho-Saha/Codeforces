#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
#ifndef ONLINE_JUDGE
#include "../DebugTemplate/debug.h"
#else
#define debug(x)
#define dbgsize(x)
#endif

void solve()
{
    int n, l, r;
    cin>>n>>l>>r;

    vector<int> mid, first, last;
    for(int i=1; i<=n; i++) {
        int x;
        cin>>x;
        if (i < l) first.push_back(x);
        else if (i > r) last.push_back(x);
        else mid.push_back(x);
    }

    sort(all(first));
    sort(all(mid), greater<>());
    sort(all(last));

    ll mid_sum = accumulate(all(mid), 0ll);

    ll mid_bad = 0, first_nibo = 0;
    for(int i=0; i<min(first.size(), mid.size()); i++) {
        if (first[i] < mid[i]) {
            first_nibo += first[i];
            mid_bad += mid[i];
        } else {
            break;
        }
    }

    ll mid1 = mid_sum - mid_bad + first_nibo;
    
    ll last_nibo = 0;
    mid_bad = 0;
    for(int i=0; i<min(last.size(), mid.size()); i++) {
        if (last[i] < mid[i]) {
            last_nibo += last[i];
            mid_bad += mid[i];
        } else {
            break;
        }
    }

    ll mid2 = mid_sum - mid_bad + last_nibo;

    ll ans = min({mid1, mid2, mid_sum});
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