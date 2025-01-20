#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main()
{
    fastIO();
    ll w, h, n;
    cin>>w>>h>>n;

    auto ok = [&](ll x) {
        return (x/w)*(x/h) >= n;
    };

    ll l = 0, r=1;
    while(!ok(r)) {
        r *= 2;
    }

    while(r > l + 1)
    {
        ll mid = l + (r-l)/2;
        if (ok(mid)) {
            r = mid;
        } else {
            l = mid;
        }
    }

    cout<<r<<nl;
    
    return 0;
}