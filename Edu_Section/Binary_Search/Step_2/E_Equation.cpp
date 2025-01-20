#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
int main()
{
    fastIO();
    double c;
    cin>>c;

    auto ok = [&](double x) {
        return ((x*x) + sqrt(x)) >= c;
    };

    double l=0, r=1e6, mid;
    for(int i=1; i<=54; i++) {
        mid = l + (r-l)/2;
        if (ok(mid)) {
            r = mid;
        } else {
            l = mid;
        }
    }

    cout<<setprecision(7)<<r<<nl;

    return 0;
}