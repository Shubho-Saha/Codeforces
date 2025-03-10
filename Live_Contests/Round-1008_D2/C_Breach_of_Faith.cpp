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
    n = 2*n;
    vector<ll> v(n), res1, res2;
    ll total = 0;
    for(int i = 0; i<n; i++) {
        cin>>v[i];
        total += v[i];
    }
    
    sort(all(v));
    ll last = v.back();
    ll fhalf = 0, sechalf = 0;
    for(int i=0; i<(n/2)-1; i++) {
        fhalf += v[i];
        res1.push_back(v[i]);
    }

    sechalf = total - fhalf - last;
    ll a = (last+sechalf) - fhalf;
    res1.push_back(a);
    
    for(int i=(n/2)-1; i<n-1; i++) {
        res2.push_back(v[i]);
    }

    cout<<last<<" ";
    for(int i=0; i<res1.size(); i++) {
        cout<<res1[i]<<" "<<res2[i]<<" ";
    }
    cout<<nl;
  
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