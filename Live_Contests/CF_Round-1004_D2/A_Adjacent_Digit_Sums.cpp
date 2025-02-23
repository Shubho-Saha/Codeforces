#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int x, y;
    cin>>x>>y;

    if (x == y) {
        cout<<"No"<<nl;
    } else if (y > x) {
        if (x+1 == y) {
            cout<<"Yes"<<nl;
        } else {
            cout<<"No"<<nl;
        }
    } else {
        int tmp = x - (y-1);
        if (tmp % 9 == 0) {
            cout<<"Yes"<<nl;
        } else {
            cout<<"No"<<nl;
        }
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