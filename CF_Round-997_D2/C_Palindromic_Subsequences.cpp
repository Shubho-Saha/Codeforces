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

    vector<int> v;
    int x = 2;
    for(int i=1; i<=n; i++) {
        if (i==1 || i==2 || i==n) {
            v.push_back(1);
        } else {
            v.push_back(x);
            x++;
        }
    }

    for(auto x : v) {
        cout<<x <<" ";
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