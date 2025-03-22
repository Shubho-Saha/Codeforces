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
    vector<int> v(n);
    bool zero = false;
    for(int i=0; i<n; i++) {
        cin>>v[i];
        if (v[i] == 0) {
            zero = true;
        }
    }

    if (!zero) {
        cout<<1<<nl;
        cout<<1<<" "<<n<<nl;
    } else {
        bool f1 = false, f2 = false;
        for(int i=0; i<n-2; i++) {
            if (v[i] == 0) {
                f1 = true;
            }
        }

        if (v[n-1] == 0 || v[n-2] == 0) {
            f2 = true;
        }

        if (f1 && f2) {
            cout<<3<<nl;
            cout<<(n-1)<<" "<<n<<nl;
            cout<<1<<" "<<(n-2)<<nl;
            cout<<1<<" "<<2<<nl;
        } else if (f1 == true && f2 == false) {
            cout<<2<<nl;
            cout<<1<<" "<<(n-2)<<nl;
            cout<<1<<" "<<3<<nl;
        } else if (f1 == false && f2 == true) {
            cout<<2<<nl;
            cout<<(n-1)<<" "<<n<<nl;
            cout<<1<<" "<<(n-1)<<nl;
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