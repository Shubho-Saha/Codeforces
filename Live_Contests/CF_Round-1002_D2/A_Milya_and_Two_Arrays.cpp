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
    map<int, int> a, b;
    for(int i=0; i<n; i++) {
        int x; cin>>x;
        a[x]++;
    }
    for(int i=0; i<n; i++) {
        int x; cin>>x;
        b[x]++;
    }

    int sz = a.size() + b.size();
    if (sz > 3) {
        cout<<"YES"<<nl;
    } else {
        cout<<"NO"<<nl;
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