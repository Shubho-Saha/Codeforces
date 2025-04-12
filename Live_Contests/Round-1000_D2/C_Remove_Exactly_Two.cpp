#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n; cin>>n;
    set<pair<int,int>> edges;
    vector<int> deg(n, 0);
    for(int i=1; i<=n-1; i++) {
        int a, b;
        cin>>a>>b; a--; b--;
        edges.insert({a,b});
        edges.insert({b,a});
        deg[a]++; deg[b]++;
    }

    vector<pair<int, int>> v;
    for(int i=0; i<n; i++) {
        v.push_back({deg[i], i});
    }
    sort(all(v), greater<>());

    int mxAns = -1;
    for(int i=0; i<n-1; i++)
    {
        for(int k=i+1; k<n; k++)
        {
            int deg1 = v[i].first;
            int ed1 = v[i].second;
            int deg2 = v[k].first;
            int ed2 = v[k].second;
            if (edges.count({ed1, ed2}) == 0) {
                mxAns = max(mxAns, (deg1+deg2-1));
                break;
            } else {
                mxAns = max(mxAns, deg1+deg2-2);
            }
        }
    }

    cout<<mxAns<<nl;

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