 #include <bits/stdc++.h>
 #define ll long long int
 #define all(x) x.begin(), x.end()
 #define nl '\n'
 #define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
 using namespace std;
 #ifndef ONLINE_JUDGE
 #include "../DebugTemplate/debug.h"
 #else
 #define debug(x...)
 #define dbgsize(x)
 #endif
 
 void solve()
 {
    int n;
    cin>>n;
    set<int> st;
    vector<int> v(n);
    int mx = INT_MIN;

    for(int i=0; i<n; i++) {
        cin>>v[i];
        st.insert(v[i]);
        mx = max(v[i], mx);
    }

    if (st.size() == 1) {
        cout<<"No"<<nl;
        return;
    }

    cout<<"Yes"<<nl;
    for(auto x : v) {
        if (x == mx) {
            cout<<2<<" ";
        } else {
            cout<<1<<" ";
        }
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