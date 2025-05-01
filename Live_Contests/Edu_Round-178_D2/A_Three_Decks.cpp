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
        int a, b, c;
        cin>>a>>b>>c;
        if (c < a || c < b) {
            cout<<"NO"<<nl;
        } else if (c== a || c == b) {
            if (a != b) {
                cout<<"NO"<<nl;
            } else {
                cout<<"YES"<<nl;
            }
        } else {
            if ((a+b+c)%3 != 0) {
                cout<<"NO"<<nl;
            } else {
                int mn = min(a,b);
                int mx = max(a,b);
                int total = a+b+c;
                int avg = total/3;
                if (mx <= avg) {
                    cout<<"YES"<<nl;
                } else {
                    cout<<"NO"<<nl;
                }
            }
        } 
    }
    return 0;
}