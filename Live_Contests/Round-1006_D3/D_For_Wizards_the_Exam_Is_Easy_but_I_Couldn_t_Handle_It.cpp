#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n; cin>>n;
    vector<int> v(n+1);
    for(int i=1; i<=n; i++) {
        cin>>v[i];
    }

    int l=1, r=1, mx = 0;
    for(int i=1; i<n; i++) {
        int kome = 0, bare = 0;
        int val = v[i];
        for(int j=i+1; j<=n; j++) {
            if (v[j] < val) kome++;
            if (v[j] > val) bare++;
            if ((kome - bare) > mx) {
                mx = kome - bare;
                l = i, r = j;
            }
        }
    }

    cout<<l<<" "<<r<<nl;
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