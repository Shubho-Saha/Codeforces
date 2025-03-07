#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

const int mxN = 1e5+9;
vector<int> adlist[mxN];
int level[mxN];

void resetGlobal(int n) {
    for(int i=0; i<=n+2; i++ ) {
        adlist[i].clear();
        level[i] = 0;
    }
}

bool cmp(int a, int b) {
    return level[a] > level[b];
}

void dfs(int node, int parent)
{
    level[node] = level[parent] + 1;
    
    for(auto child : adlist[node]) {
        if (child != parent) {
            dfs(child, node);
        }
    }
}

void solve()
{
    int n, st, en;
    cin >> n >> st >> en;
    resetGlobal(n);

    for(int i=1; i<n; i++) {
        int u, v;
        cin >> u >> v;
        adlist[u].push_back(v);
        adlist[v].push_back(u);
    }

    dfs(en, en);

    vector<int> res;
    for(int i=1; i<=n; i++) {
        res.push_back(i);
    }

    sort(all(res), cmp);
    for(auto x : res) {
        cout<<x<<" ";
    }
    cout<<nl;
    
}
int main()
{
    fastIO();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}