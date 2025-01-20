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
    vector<int> res(n);
    bool isok = true;

    for(int i=0; i<n; i++)
    {
        vector<int> player(m);
        for(int j=0; j<m; j++) {
            cin>>player[j];
        }
        sort(all(player));

        int crnt = player[0];
        for(int k=1; k<player.size(); k++) {
            if (crnt + n != player[k]) {
                isok = false;
            }
            crnt = player[k];
        }
        int pos = player[0];
        if (pos >= 0 && pos < n) {
            res[pos] = i+1;
        }
    }

    if (isok) {
        for(auto x : res) {
            cout<<x<<" ";
        }
        cout<<nl;
    } else {
        cout<<-1<<nl;
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