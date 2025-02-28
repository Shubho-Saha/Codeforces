#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    ll n, x, k;
    cin>>n>>x>>k;
    string s;
    cin>>s;
    ll tmp = x;

    bool flag = false;
    ll firstTime;
    for(int i=0; i<n; i++) {
        if (s[i] == 'L') {
            tmp--;
        } else {
            tmp++;
        }
        if (tmp == 0) {
            flag = true;
            firstTime = (i+1);
            break;
        }
    }

    if (flag == false) {
        cout<<0<<nl;
        return;
    }

    ll remSec = k-firstTime;
    ll secTime;
    bool ok = false;
    for(int i=0; i<min(n, k); i++) {
        if (s[i] == 'L') {
            tmp--;
        } else {
            tmp++;
        }

        if (tmp == 0) {
            ok = true;
            secTime = i+1;
            break;
        }
    }

    if (ok == false) {
        cout<<1<<nl;
    } else {
        ll res = remSec/secTime;
        cout<<res+1<<nl;
    }



}
int main()
{
    fastIO();
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}