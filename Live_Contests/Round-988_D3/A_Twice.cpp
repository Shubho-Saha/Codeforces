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
    vector<int> vec(n);
    set<int> st;
    int count = 0;

    for(int i=0; i<n; i++) {
        cin>>vec[i];
        if (st.count(vec[i]) == 0) {
            st.insert(vec[i]);
        } else {
            st.erase(vec[i]);
            count++;
        }
    }
    cout<<count<<nl;


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