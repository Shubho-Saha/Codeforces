#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
#ifndef ONLINE_JUDGE
// #include "../DebugTemplate/debug.h"
#else
#define debug(x)
#define dbgsize(x)
#endif

void solve() 
{
    int n; 
    cin>>n;
    string s;
    cin>>s;

    if (s[0] == s[n-1]) {
        cout<<"No"<<nl;
    } else {
        cout<<"Yes"<<nl;
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