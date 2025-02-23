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
    vector<int> v(n, -1);
    int m = n - 2;
    vector<int> b(m);
    for(int i=0; i<m; i++) {
        cin>>b[i];
    }

    
    if (m < 3) {
        cout<<"YES"<<nl;
    } else {
        bool flag = true;
        for(int i=0; i<m-2; i++) {
            if (b[i] == 1 && b[i+1] == 0 && b[i+2] == 1) {
                flag = false;
                break;
            }
        }
        if (flag) {
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