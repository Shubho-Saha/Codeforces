#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int dash = 0, under = 0;
    for(auto c : s) {
        if (c == '-') {
            dash++;
        } else {
            under++;
        }
    }

    int a = dash / 2;
    int b = (dash+1)/2;

    ll ans = (1ll*a*b*under);
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