#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    vector<ll> v(n);
    vector<ll> odarray, evenarray;
    ll total = 0;
    for(int i=0; i<n; i++) {
        cin>>v[i];
        total += v[i];
        if (v[i] % 2 == 0) {
            evenarray.push_back(v[i]);
        } else {
            odarray.push_back(v[i]);
        }
    }

    sort(all(odarray));
    sort(all(evenarray));

    if (evenarray.size() == 0) {
        cout<<odarray.back()<<nl;
        return;
    } 
    
    if (odarray.size() == 0) {
        cout<<evenarray.back()<<nl;
        return;
    }

    if (odarray.size() == 1) {
        cout<<total<<nl;
        return;
    }

    ll last = odarray.back();
    odarray.pop_back();
    ll odsz = odarray.size();
    ll odsum = accumulate(all(odarray), 0ll);
    ll evsum = accumulate(all(evenarray), 0ll);
    evsum--;
    odsum = odsum - (odsz-1);
    ll res = evsum+odsum+last;
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