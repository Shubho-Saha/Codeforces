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
    for(ll k=0; k<=63; k++) {
        ll val = (1ll<<k)-1;
        if (ok(val)) {
            r = val;
            break;
        } else {
            l = val;
        }
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