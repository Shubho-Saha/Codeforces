#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    vector<ll> arr(n+1);
    for(ll i=1; i<=n; i++) {
        cin>>arr[i];
    }

    if (n%2 == 0) 
    {
        ll mxK = 1;
        for(int i=1, idx=1; i<= n/2; i++, idx += 2) 
        {
            ll crrnt = arr[idx+1]-arr[idx];
            mxK = max(mxK, crrnt);
        }
        cout<<mxK<<endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}