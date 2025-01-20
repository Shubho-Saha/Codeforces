#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main()
{
    fastIO();
    int n, k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    auto ok=[&](double sz) {
        int cnt = 0;
        for(auto x : v) {
            cnt += x/sz;
        }

        return cnt >= k;
    };

    double l=0, r=1e7+10, mid;
    for(int i=1; i<=42; i++) {
        mid = l + (r-l)/2;
        if (ok(mid)) {
            l = mid;
        } else {
            r = mid;
        }
    }

    // Not recommended way
    // while(r-l > 1e-6)
    // {
    //     mid = l + (r-l)/2;
    //     if (ok(mid)) {
    //         l = mid;
    //     } else {
    //         r = mid;
    //     }
    // }

    cout<<setprecision(7)<<l<<nl;

    return 0;
}