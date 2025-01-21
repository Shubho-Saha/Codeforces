#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n, m;
    cin>>n>>m;
    vector<int> v;
    multiset<int> a, b;
    for(int i=0; i<n; i++) {
        int x; cin>>x;
        v.push_back(x);
    }

    for(int i=0; i<m; i++) {
        int x; cin>>x;
        b.insert(x);
    }

    sort(all(v));
    for(int i=0; i<n-1;) {
        if (i==n-1) break;
        int crnt = v[i];
        int nexxt = v[i+1];
        if (nexxt - crnt <= 1) {
            a.insert(crnt+nexxt);
            i += 2;
        } else {
            i++;
        }
    }
    // cout<<"hi"<<nl;

    if (a == b) {
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
    while(t--)
    {
        solve();
    }

    return 0;
}