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

int main()
{
    fastIO();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int one = count(all(s), '1');
        
        int ans = 0;
        for(auto c : s) {
            if (c == '1') {
                ans += (one-1);
            } else {
                ans += (one+1);
            }
        }

        cout<<ans<<nl;
    }
    
    return 0;
}