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
    string s;
    cin>>s;

    int ans = 0;
    int left = 0;
    bool flag = false;
    for(int i=0; i<n-1; i++) {
        if (s[i] == '1') {
            flag = true;
        }
        if (s[i] != s[i+1]) {
            ans++;
        }
    }

    if (s[0] == '0') {
        cout<<ans<<nl;
    } else {
        cout<<ans+1<<nl;
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