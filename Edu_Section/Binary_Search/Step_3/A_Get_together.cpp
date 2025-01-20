#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main()
{
    fastIO();
    ll n; cin>>n;
    vector<double> Xi, Vi;
    for(int i=0; i<n; i++) {
        double x, v;
        cin>>x>>v;
        Xi.push_back(x);
        Vi.push_back(v);
    }

    auto isGood = [&](double time) {
        double Lmax = -1e18;
        double Rmin = 1e18;
        for(int i=0; i<n; i++) {
            double crntLi = Xi[i] - (time*Vi[i]);
            double crntRi = Xi[i] + (time*Vi[i]);
            Lmax = max(Lmax, crntLi);
            Rmin = min(Rmin, crntRi);
        }

        return Lmax <= Rmin;
    };

    double l=0, r=2e9+10, mid;
    for(int i=1; i<=51; i++) {
        mid = l + (r-l)/2;
        if (isGood(mid)) {
            r = mid;
        } else {
            l = mid;
        }
    }

    cout<<setprecision(16)<<r;

    return 0;
}