#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

bool possible(int mex, int k, int n)
{
    if (mex == 0) return true;
    int p = n / mex;
    return p >= k;
}

void solve()
{
    int n, k;
    cin>>n>>k;
    vector<int> v(n);
    for(auto &it : v) cin>>it;

    auto ok = [&](int mex) 
    {
        int cnt = 0, part = 0, x = 0;
        set<int> st;
        for(int i=0; i<n; i++) {
            if (v[i] < mex) {
                st.insert(v[i]);
            }
            if (st.size() == mex) {
                st.clear();
                part++;
            }
        }
        return part >= k;
    };

    int lo = 0, hi = n, mid;
    int mxans = 0, ans;
    while(lo <= hi)
    {
        int mid = (lo+hi)/2;
        if (possible(mid, k, n)) {
            if (ok(mid)) {
                ans = mid;
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        } else {
            hi = mid - 1;
        }
    }

    cout<<max(mxans, ans)<<nl;

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