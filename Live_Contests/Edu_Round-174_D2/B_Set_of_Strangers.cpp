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

    vector<vector<int>> grid(n, vector<int>(m));
    map<int, set<pair<int,int>>> z;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            int x;
            cin>>x;
            grid[i][j] = x;
            z[x].insert({i, j});
        }
    }

    vector<int> cnt;
    for(auto [value, pos_st] : z) {
        bool flag = false;
        for(auto [i, j] : pos_st) {
            pair<int, int> p1 = {i, j+1}, p2 = {i , j-1}, p3 = {i+1, j}, p4 = {i-1, j};
            if (pos_st.count(p1) != 0 || pos_st.count(p2) != 0 || pos_st.count(p3) != 0 || pos_st.count(p4) != 0) {
                flag = true;
                break;
            }

        }
        if (flag) {
            cnt.push_back(2);
        } else {
            cnt.push_back(1);
        }
        
        
    }

    sort(all(cnt));
    int ans = 0;
    for(int i=0; i<cnt.size()-1; i++) {
        ans += cnt[i];
    }

    cout<<ans<<nl;
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