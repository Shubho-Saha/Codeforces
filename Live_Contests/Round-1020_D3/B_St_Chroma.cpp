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
    int n, x;
    cin>>n>>x;

    if (x == 0) {
        for(int i=n-1; i>=0; i--) {
            cout<<i<<" ";
        }
        cout<<nl;
    } else {
        int a = x, b = n - a;
        for(int i=0; i<a; i++) {
            cout<<i<<" ";
        }
        int z = n-1;
        for(int i=1; i<=b; i++) {
            cout<<z--<<" ";
        }
        cout<<nl;
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