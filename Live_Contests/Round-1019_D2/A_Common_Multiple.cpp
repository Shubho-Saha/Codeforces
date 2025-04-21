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

ll lcmm(ll a, ll b)
{
    return (a*b)/__gcd(a,b);
}
void solve()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto &it : v) cin>>it;

    ll lc = 1;
    for(auto x : v) {
        lc = lcmm(lc, x);
    }

    set<int> st;
    for(int x : v) {
        int z = lc / x;
        st.insert(z);
    }

    cout<<st.size()<<nl;

}
int main()
{
    fastIO();
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    
    return 0;
}