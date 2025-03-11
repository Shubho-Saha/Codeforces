#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int k; cin>>k;
    vector<int> cnt;

    while(k > 0)
    {
        int l = 0, r = 500, mid, res;
        
        while(l<=r)
        {
            mid = (l+r)/2;
            ll pcnt = (mid*(mid-1))/2;
            if (pcnt <= k) {
                res = mid;
                l = mid+1;
            } else {
                r = mid - 1;
            }
        }

        cnt.push_back(res);
        k -= (res*(res-1))/2;    
    }

    ll sum = accumulate(all(cnt), 0);
    cout<<sum<<nl;

    int f = 1, x = 0;
    for(auto p : cnt) {
        for(int i=1; i<=p; i++) {
            cout<<f<<" "<<(x+i)<<nl;
            if (i==p) {
                x += i;
            }
        }
        f++;
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