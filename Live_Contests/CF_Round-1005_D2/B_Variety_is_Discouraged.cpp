#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int> v(n+1), freq(n+2, 0);
    for(int i=1; i<=n; i++) {
        cin>>v[i];
        freq[v[i]]++;
    }

    int cnt = 0, mx = 0, l = -1, r = -1;
    for(int i=1; i<=n; i++) {
        int val = v[i];
        if (freq[val] < 2) {
            cnt++;
            if (cnt > mx) {
                r = i;
                l = r - cnt + 1;
                mx = cnt;
            }
        } else {
            cnt = 0;
        }
    }

    if (mx == 0) {
        cout<<0<<nl;
    } else {
        cout<<l<<" "<<r<<nl;
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