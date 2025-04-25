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
    int n, k;
    cin>>n>>k;

    vector<int> a(n), b(n);
    for(auto &it : a) cin>>it;
    for(auto &it : b) cin>>it;

    bool flag = true;
    int avg = -1;
    for(int i=0; i<n; i++)
    {
        if (b[i] != -1) {
            if (avg == -1) {
                avg = a[i] + b[i];
            } else {
                if (a[i]+b[i] != avg) {
                    flag = false;
                }
            }
        }
    }

    if (flag == false) {
        cout<<0<<nl;
        return;
    }

    debug(avg)
    if (avg != -1)
    {
        for(int i=0; i<n; i++) {
            if (b[i] == -1) {
                int req = avg - a[i];
                if (req < 0 || req >k) {
                    cout<<0<<nl;
                    return;
                }
            }
        }
        cout<<1<<nl;
    } else {
        int mnVal = *min_element(all(a));
        int mxVal = *max_element(all(a));
        int avg = mnVal + k;
        int z = avg - mxVal;
        cout<<z+1<<nl;
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