#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n, m, k;
    cin>>n>>m>>k;

    vector<int> mlist(m);
    for(int i=0; i<m; i++) {
        cin>>mlist[i];
    }

    set<int> st;
    vector<int> nai;
    for(int i=0; i<k; i++) 
    {
        int x;
        cin>>x;
        st.insert(x);
    }

    if (n - k > 1) {
        for(int i=0; i<m; i++) {
            cout<<0;
        }
        cout<<nl;
        return;
    }
    if (n == k) {
        for(int i=0; i<m; i++) {
            cout<<1;
        }
        cout<<nl;
        return;
    }

    for(int i=1; i<=n; i++)
    {
        if (st.count(i) == 0) {
            nai.push_back(i);
        }
    }
    
    int naiVal = nai[0];
    
    for(int i=0; i<m; i++) 
    {
        if (mlist[i] == naiVal) {
            cout<<1;
        } else {
            cout<<0;
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