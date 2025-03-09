#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n, k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<int> cost(n);
    for(auto &it : cost) cin>>it;

    auto ok = [&](int pen)
    {
        string tmp = "";
        for(int i=0; i<n; i++) {
            if (cost[i] > pen) {
                tmp += s[i];
            }
        }

        int cnt = 0, f = 0;
        for(auto c : tmp) {
            if (c == 'B') {
                if (!f) {
                    cnt++; f = 1;
                }
            } else {
                f = 0;
            }
        }
        return cnt <= k;

    };

    int l= 0, r=1e9, mid, res;
    while(l<=r)
    {
        mid = l + (r-l)/2;
        if (ok(mid)) {
            res = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
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