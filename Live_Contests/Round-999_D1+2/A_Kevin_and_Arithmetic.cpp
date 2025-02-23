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
    int odd=0, even=0;
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        if (x&1) {
            odd++;
        } else {
            even++;
        }
    }

    int ans = 0;
    if (even != 0) {
        ans = odd + 1;
    } else {
        ans = odd-1;
    }

    cout<<ans<<nl;
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