#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
bool ok(ll n) {
    string s = to_string(n);
    for(auto c : s) {
        if (c == '7') return true;
    }
    return false;
}
void solve()
{
    ll n;
    cin>>n;

    bool flag = false;
    ll add = 9;
    vector<ll> v = {0, 9, 99, 999, 9999, 99999, 999999, 9999999, 99999999, 999999999};
    ll ans = 0;
    for(ll i=0; i<=10; i++) {
        for(int k=0; k<10; k++) {
            ll tmp = n + (i*v[k]);
            if (ok(tmp)) {
                flag = true;
                ans = i;
                break;
            }
        }
        if (flag) break;
    }

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