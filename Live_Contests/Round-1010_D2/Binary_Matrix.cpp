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
    vector<vector<char>> grid(n, vector<char>(m));
    set<int> row, col;
    set<pair<int,int>> p;

    for(int i=0; i<n; i++) {
        int one = 0;
        for(int j=0; j<m; j++) {
            cin>>grid[i][j];
            if (grid[i][j] == '1') one++;
        }
        if (one % 2 != 0) {
            row.insert(i);
        }
    }
    for(int i=0; i<m; i++) {
        int one = 0;
        for(int j=0; j<n; j++) {
            if (grid[j][i] == '1') one++;
        }
        if (one % 2 != 0) {
            col.insert(i);
        }
        
    }
    
    cout<<max(row.size(), col.size())<<nl;
    
    

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