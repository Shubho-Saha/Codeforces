#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve() 
{
    int n; cin>>n;
    vector<int> v(n);
    for(auto &it : v) cin>>it;
    sort(all(v));

    bool flag = true;
    for(int i=0; i<n-1; i+=2) {
        if (v[i] != v[i+1]) {
            flag = false;
            break;
        } else {
            for(int k=i+2; k<n; k++) {
                if (v[i] == v[k]) {
                    v[k]++;
                }
            }
        }
    }

    if (flag) {
        cout<<"Yes"<<nl;
    } else {
        cout<<"No"<<nl;
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