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

    if (x == 0)
    {
        if (n%2 == 0) {
            cout<<n<<nl;
        } else {
            if (n== 1) {
                cout<<-1<<nl;
            } else {
                cout<<n+3<<nl;
            }
        }
        return;
    }

    if (x == 1)
    {
        if (n%2 == 0) {
            cout<<n+3<<nl;
        } else {
            cout<<n<<nl;
        }
        return;
    }

    int cnt = __builtin_popcount(x);

    if (n <= cnt) {
        cout<<x<<nl;
    } else {
        int rem = n - cnt;
        if (rem % 2 == 0) {
            ll res = x + rem;
            cout<<res<<nl;
        } else {
            ll res = x + rem + 1;
            cout<<res<<nl;
        }
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