#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    ll n, a, b, c;
    cin>>n>>a>>b>>c;

    ll abc = a + b + c;

    ll ans = (n / abc)*3;
    ll rest = n % abc;
    if (rest == 0) {
        cout<<ans<<nl;
        return;
    }
    if (rest <= a) {
        ans++;
    } else if ( rest <= (a+b)) {
        ans += 2;
    } else {
        ans += 3;
    }

    cout<<ans<<nl;
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