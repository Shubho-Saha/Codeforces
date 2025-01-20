#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;
int main()
{
    fastIO();
    ll n, x, y;
    cin >> n >> x >> y;
    int fast = min(x, y);
    int slow = max(x, y);

    auto ok = [&] (ll sec) {
        ll cnt = 0;
        cnt += (sec/fast);
        cnt += ((sec-fast)/slow);
        return cnt >= n;
    };

    ll l=0, r=1e9+10, mid;
    while(r>l+1)
    {
        mid = l + (r-l)/2;
        if (ok(mid)) {
            r = mid;
        } else {
            l = mid;
        }
    }

    cout<<r<<nl;

    return 0;
}