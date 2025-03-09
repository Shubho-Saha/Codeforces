#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    ll n, l, r;
    cin>>n>>l>>r;
    vector<int> v(n+1), prefix(n+1);
    for(int i=1; i<=n; i++) {
        cin>>v[i];
        prefix[i] = prefix[i-1] ^ v[i];
    }

    if (n%2 == 0) {
        n++;
        v.push_back(prefix[n/2]);
        prefix.push_back((v.back() ^ prefix.back()));
    }

    int res = 0, xn = prefix[n];
    while(true)
    {
        if (r <= n) {
            res ^= v[r];
            break;
        } else if ( r > n && r <= (2*n)) {
            res ^= prefix[r/2];
            break;
        } else {
            ll half = r/2;
            if (half%2 != 0) {
                res ^= xn;
                break;
            } else {
                res ^= xn;
                r = half;
            }
        }
    }

    cout<<res<<nl;
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