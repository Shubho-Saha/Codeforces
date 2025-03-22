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
    string s, rs;
    cin>>s;

    if (k==0) {
        rs = s;
        reverse(all(rs));
        if (s < rs) {
            cout<<"YES"<<nl;
        } else {
            cout<<"NO"<<nl;
        }
    } else {
        bool f = false;
        for(int i=0; i<n-1; i++) {
            if (s[i] != s[i+1]) {
                f = true;
                break;
            }
        }
        if (f) {
            cout<<"YES"<<nl;
        } else {
            cout<<"NO"<<nl;
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