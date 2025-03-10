#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n, k, p;
    cin>>n>>k>>p;

    if ( k < 0 ) {
        if (k < (n*-p)) {
            cout<<-1<<nl;
        } else {
            k = -1*k;
            int ans = ceil(1.0*k/p);
            cout<<abs(ans)<<nl;
        }
    } else {
        if (k > (n*p)) {
            cout<<-1<<nl;
        } else {
            int ans = ceil(1.0*k/p);
            cout<<abs(ans)<<nl;
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