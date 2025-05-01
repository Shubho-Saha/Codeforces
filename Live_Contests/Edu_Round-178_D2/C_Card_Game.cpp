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

    vector<int> a, b;
    for(int i=0; i<n; i++) {
        if (s[i] == 'A') {
            a.push_back(i+1);
        } else {
            b.push_back(i+1);
        }
    }

    if (n==2)
    {
        if (a.front() == 1) {
            cout<<"Alice"<<nl;
        } else {
            cout<<"Bob"<<nl;
        }
        return;
    }

    debug(a,b)
    if (a.front() == 1 && a.back() == n) {
        cout<<"Alice"<<nl;
        return;
    }

    if (b.front() == 1 && b.back() == n) {
        cout<<"Bob"<<nl;
        return;
    }

    if (b.size() == 1) {
        cout<<"Alice"<<nl;
        return;
    }
    if (a.size() == 1) {
        cout<<"Bob"<<nl;
        return;
    }

    if (b.front() == 1) {
        int x = b.back();
        int y = a[a.size()-2];
        if (y > x) {
            cout<<"Alice"<<nl;
        } else {
            cout<<"Bob"<<nl;
        }
    } else {
        cout<<"Bob"<<nl;
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