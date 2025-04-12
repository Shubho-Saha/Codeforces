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
    vector<ll> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    for(int i=0; i<n-1; i++) {
        ll newVal = v[i] + v[i+1];
        v[i+1] = (newVal-1);
    }

    cout<<v.back()<<nl;
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