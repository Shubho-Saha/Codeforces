#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n, k;
    cin>>n>>k;
    vector<int> v(n+1);
    v[n] = n-1;
    v[n-1] = n;

    if (k % 2 == 0) {
        for(int i=1; i<=n-2; i++) {
            v[i] = n - 1;
        }
    } else {
        for(int i=1; i<=n-2; i++) {
            v[i] = n;
        }
    }

    for(int i=1; i<=n; i++) {
        cout<<v[i]<<" ";
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