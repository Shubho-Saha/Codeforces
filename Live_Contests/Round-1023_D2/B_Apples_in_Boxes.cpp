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

    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    bool flag = false;
    int mxVal = *max_element(all(v));
    int mnVal = *min_element(all(v));
    
    for(int i=0; i<n; i++) {
        int dif = mxVal - v[i];
        if (dif > k+1) {
            flag = true;
        }
    }

    if (flag) {
        cout<<"Jerry"<<nl;
        return;
    }

    
    int cnt = 0;
    for(int i=0; i<n; i++) {
        if (v[i] == mxVal) {
            int dif = mxVal - mnVal;
            if (dif == k+1) {
                cnt++;
            }
        }
    }

    if (cnt > 1) {
        cout<<"Jerry"<<nl;
        return;
    }

    ll sum = accumulate(all(v), 0ll);
    if (sum % 2 == 0) {
        cout<<"Jerry"<<nl;
    } else {
        cout<<"Tom"<<nl;
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