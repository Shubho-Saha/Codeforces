#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n, k;
    cin>>n>>k;
    vector<int> v(n);
    for(auto &it : v) cin>>it;

    auto ok = [&](int mex) 
    {
        vector<bool> vis(mex);
        int crnt = 0, part = 0;
        for(int i=0; i<n; i++) {
            if (v[i] < mex && vis[v[i]] == false) {
                vis[v[i]] = true;
                crnt++;
            }

            if (crnt == mex) {
                crnt = 0;
                part++;
                fill(all(vis), false);
            }
        }

        return part >= k;
    };

    int lo = 0, hi = n+1, mid;
    while(hi - lo > 1)
    {
        mid = lo + (hi-lo)/2;
        if (ok(mid)) {
            lo = mid;
        } else {
            hi = mid;
        }
    }

    cout<<lo<<nl;
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