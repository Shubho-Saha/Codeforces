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
    string s;
    cin>>s;

    int alt = 0;
    char crnt = '\0';
    for(auto c : s)
    {
        if (c != crnt) {
            alt++;
            crnt = c;
        }
    }

    if (alt == 1) {
        if (s[0] == '0') {
            cout<<n<<nl;
        } else {
            cout<<n+1<<nl;
        }
        return;
    }

    if (alt == 2 || alt == 3) {
        cout<<n+1<<nl;
        return;
    }

    bool f;
    if (s[0] == '0') {
        f = true;
    } else {
        f = false;
    }
    
    if (f) {
        int res = n+alt-3;
        cout<<res<<nl;
    } else {
        int res = n+alt-2;
        cout<<res<<nl;
    }



   
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