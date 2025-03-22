#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    ll x, y;
    cin>>x>>y;

    if (x == y) {
        cout<<-1<<nl;
        return;
    }

    ll mx = max(x, y);
    int limit = __lg(mx);
    ll k = ((1<<(limit+1)));
    cout<<(k-mx)<<nl;
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