#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    ll l, r, k;
    cin>>l>>r>>k;

    int right = r / k;
    int res = right - l + 1;
    if (res <= 0) {
        cout<<0<<nl;
    } else {
        cout<<res<<nl;
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