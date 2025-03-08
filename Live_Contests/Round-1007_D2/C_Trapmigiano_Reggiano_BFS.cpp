#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

const int mxN = 1e5+9;
vector<int> adlist[mxN];
int level[mxN];

void resetGlobal(int n) {
    for(int i=0; i<=n+2; i++) {
        level[i] = 0;
        adlist[i].clear();
    }
}

bool cmp(int x, int y) {
    return level[x] > level[y];
}

void bfs(int root)
{
    queue<pair<int,int>> q;
    level[root] = 1;
    q.push({root, 1});

    while(!q.empty())
    {
        auto p = q.front();
        q.pop();
        int node = p.first;
        int nodeLevel = p.second;
        for(auto child : adlist[node]) {
            if (level[child] == 0) {
                level[child] = nodeLevel + 1;
                q.push({child, level[child]});
            }
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

    bfs(en);

    vector<int> res;
    for(int i=1; i<=n; i++) res.push_back(i);
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
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}