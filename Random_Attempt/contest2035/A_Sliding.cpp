#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    ll n, m, r, c;
    cin>>n>>m>>r>>c;
    ll crrntRowteBaki = m-c;
    ll rowBaki = n-r;
    ll ans = crrntRowteBaki + (rowBaki * m) + (rowBaki*(m-1));
    cout<<ans<<nl;


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