#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

const int mod = 998244353;

int add(int x, int y)
{
    x += y;
    while(x > mod) {
        x -= mod;
    }
    return x;
}
void solve()
{
    int n;
    cin>>n;
    vector<int> cnt(4, 0);
    for(int i=0; i<n; i++) {
        int x; cin>>x;
        if (x == 1) {
            cnt[1]++;
        } else if (x == 2) {
            cnt[2] = add(cnt[2], add(cnt[2], cnt[1]));
        } else {
            cnt[3] = add(cnt[3], cnt[2]);
        }
    }

    cout<<cnt[3]<<nl;
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