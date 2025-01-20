#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    ll n, k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    sort(all(v));
    int cnt = 0;
    ll l=0, r=n-1;
    while(l < r)
    {
        if (v[l] + v[r] == k) {
            cnt++;
            l++; r--;
        } else if (v[l] + v[r] > k) {
            r--;
        } else {
            l++;
        }
    }

    cout<<cnt<<nl;
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