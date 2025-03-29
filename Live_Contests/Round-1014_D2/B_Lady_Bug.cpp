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
    string a, b;
    cin>>a>>b;

    int odd1 = 0, even1=0;
    for(int i=0; i<n; i++) {
        if (a[i] == '1') {
            if (i%2 == 0) {
                even1++;
            } else {
                odd1++;
            }
        }
    }

    if ((odd1+even1) == 0) {
        cout<<"YES"<<nl;
        return;
    }

    int odd0 = 0, even0 = 0;
    for(int i=0; i<n; i++) {
        if (b[i] == '0') {
            if (i%2 == 0) {
                even0++;
            } else {
                odd0++;
            }
        }
    }

    // cout<<even1<<" "<<odd1<<nl;
    // cout<<odd0<<" "<<even0<<nl;

    if (even0 >= odd1 && odd0 >= even1) {
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