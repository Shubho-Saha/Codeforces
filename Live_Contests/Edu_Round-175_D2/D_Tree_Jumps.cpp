#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

const int mxN = 3e5+9;
const int mod = 998244353;
int levelSum[mxN], dist[mxN], parent[mxN], dp[mxN];

void resetGlobal(int n) {
    for(int i=0; i<=n+1; i++) {
        levelSum[i] = 0;
        dist[i] = 0;
        parent[i] = -1;
        dp[i] = 0;
    }
}

int add(int x, int y) {
    x += y;
    while(x >= mod) {
        x -= mod;
    }
    if (x < 0) {
        x += mod;
    }
    return x;
}

bool cmp(int a, int b) {
    return dist[a] < dist[b];
}

void solve()
{
    int n;
    cin>>n;
    resetGlobal(n);
    vector<int> v(1, 1);

    for(int i=2; i<=n; i++) {
        cin>>parent[i];

        dist[i] = dist[parent[i]] + 1;
        v.push_back(i);
    }

    sort(all(v), cmp);
    dp[1] = 1, levelSum[0] = 1;
    for(int i=1; i<n; i++) {
        int crntNode = v[i];
        int crntLv = dist[crntNode];
        int lvSum = levelSum[crntLv-1];
        int prntSum = parent[crntNode] == 1 ? 0 : dp[parent[crntNode]];
        dp[crntNode] = add(lvSum, -prntSum);
        levelSum[crntLv] = add(levelSum[crntLv], dp[crntNode]);
    }

    int res = 0;
    for(int i=1; i<=n; i++) {
        res = add(res, dp[i]);
    }
    cout<<res<<nl;

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