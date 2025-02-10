#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    ll n, m;
    cin>>n>>m;
    string s; 
    cin>>s;
    vector<vector<ll>> grid(n, vector<ll>(m));
    for(ll i=0; i<n; i++) {
        for(ll j=0; j<m; j++) {
            cin>>grid[i][j];
        }
    }

    vector<vector<bool>> visited(n, vector<bool>(m, true));
    ll a = 0, b = 0;
    visited[a][b] = false;
    for(auto c : s) {
        if (c == 'D') a++;
        else b++;
        visited[a][b] = false;
    }

    for(ll i=0; i<n; i++) {
        ll cnt = 0, x, y;
        ll sum = 0;
        for(int j=0; j<m; j++) {
            if (visited[i][j]) {
                sum += grid[i][j];
            } else {
                cnt++;
                x = i;
                y = j;
            }
        }

        if (cnt == 1) {
            grid[x][y] = -1*sum;
            visited[x][y] = true;
        }
    }

    for(ll i=0; i<m; i++) {
        ll cnt = 0, x, y;
        ll sum = 0;
        for(ll j=0; j<n; j++) {
            if (visited[j][i]) {
                sum += grid[j][i];
            } else {
                cnt++;
                x = j;
                y = i;
            }
        }

        if (cnt == 1) {
            grid[x][y] = -1*sum;
        }
    }

    for(ll i=0; i<n; i++) {
        for(ll j=0; j<m; j++) {
            cout<<grid[i][j]<<" ";
        }
        cout<<nl;
    }
}
int main()
{
    fastIO();
    int t; cin>>t;
    while(t--) {
        solve();
    }

    return 0;
}